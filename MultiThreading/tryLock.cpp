#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

class RaceCondition {
    private:
    int num = 0;
    mutex mtx;
    public:
    void increementNum(){
        for(int i = 0; i < 100000; i++){
        if(mtx.try_lock()){ // this line does not block the thread
        num++;
        mtx.unlock();
        } //lock unlock to avoid race condition
    }
    }
    int getNumber(){
        return num;
    }
};

int main(){
    RaceCondition rcd;
    thread t1(&RaceCondition::increementNum,&rcd);
    thread t2(&RaceCondition::increementNum,&rcd);
    thread t3(&RaceCondition::increementNum,&rcd);
    thread t4(&RaceCondition::increementNum,&rcd);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    cout << rcd.getNumber() << endl;
    return 0;



}