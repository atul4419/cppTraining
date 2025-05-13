// Functor = "function object"

// it can hold the state of function, 

#include <iostream>
using namespace std;
class CellCounter {

    int num;
    public :
    CellCounter() : num(0){}
    void operator() (){
        num++;  // Here we hold the state of this variable, in normal function we achive the same using static variable/
        cout << "Called " << num << " times" << endl; 
    }
};

int main(){
    CellCounter cellctr;
    cellctr();
    cellctr();
    cellctr();
    cellctr();
    cellctr();
    cellctr();

}