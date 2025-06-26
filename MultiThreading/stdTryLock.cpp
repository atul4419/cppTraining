#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

// Question
//  Write a program in which two thread can produce some data and one thread can consume it, after consuming it can reset the same.
mutex M1, M2;
int num1 = 0, num2 = 0;
void sleepForaSecond(int second)
{
    this_thread::sleep_for(chrono::seconds(second));
}

void produceData(int &num, mutex &mtx, string str)
{
    for(int i = 0; i < 5; i++){
    mtx.lock();
    num++;
    cout << str << " is updated " << endl;
    mtx.unlock();
    sleepForaSecond(1);
    }

}

void consumeData()
{

    int count = 5;
    int sum = 0;

    while (true)
    {
        if (-1 == std::try_lock(M1, M2))
        {
            if (0 != num1 && 0 != num2)
            {
                sum += num1 + num2;
                count--;
                num1 = 0;
                num2 = 0;
                cout << "XplusY " << sum << '\n';
            }
            M1.unlock();
            M2.unlock();
        }
        if (count == 0)
            break;
    }
}
int main()
{

    thread T1(produceData, ref(num1), ref(M1), "X");
    thread T2(produceData, ref(num2), ref(M2), "Y");

    thread T3(consumeData);
    T1.join();
    T2.join();
    T3.join();

    return 0;
}