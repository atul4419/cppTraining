#include<iostream>
#include<thread>

using namespace std;

class Demo {
public:

void print(){
    cout << " Hello " << endl;
}
};

int main(){
    Demo d;
    thread t1(&Demo::print,&d);
    
    // The output of this program is terminate called without an active exception.

    // Because
    // Either join() or detach() should be called on thread object, otherwise during thread objects destructor it will 
    // terminate the program. Because inside destructor it checks if thread is still joinable? if yes then it terminates the program.

    //to fix this issue.
   // t1.detach();
    t1.join();
    return 0;
    
}