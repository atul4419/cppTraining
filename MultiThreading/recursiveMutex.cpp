//explain recursive mutex

#include<iostream>
#include<thread>
#include <mutex>

using namespace std;

int num = 0;
recursive_mutex rmtx;
void increement(int fnum){

   rmtx.lock();
    if (num == fnum) {
        rmtx.unlock();
        return;
    }
    num++;
    cout << num << endl;
    increement(fnum); // safe recursive call
    rmtx.unlock();

}
void safe_increement(int fnum) {
    rmtx.lock();
    increement(fnum);  // define this as a helper function without any locks inside
    rmtx.unlock();
}

int main(){

    thread t1(safe_increement, 10);
    thread t2(safe_increement, 20);

    t1.join();
    t2.join();
}