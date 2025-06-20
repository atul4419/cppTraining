#include<iostream>
#include<chrono>
#include<atomic>
#include<thread>
using namespace std;

typedef unsigned long long int ulli;

void oddSum(ulli start, const ulli end, ulli &response){
    while(start <= end){
        if((start & 1) == 1){
            response += start;
        }
        start++;
    }
}

void evenSum(ulli start, const ulli end, ulli &response){
    while(start <= end){
        if((start & 1) == 0){
            response += start;
        }
        start++;
    }
}

int main(){
    ulli start = 1, end = 1000000000000;
    ulli oddresponse = 0, evenresponse = 0;  // Fixing variable name

    const auto startTime = chrono::system_clock::now();

    // Corrected thread calls
    thread t1(oddSum, start, end, ref(oddresponse));
    thread t2(evenSum, start, end, ref(evenresponse));
    
    t1.join();
    t2.join();

    const auto endTime = chrono::system_clock::now();
    const auto timeTaken = endTime - startTime;

    cout << "Odd Sum: " << oddresponse << endl;
    cout << "Even Sum: " << evenresponse << endl;
    cout << "Time taken in sec: " << chrono::duration_cast<chrono::milliseconds>(timeTaken).count() / 1000.0 << endl;

    return 0;
}