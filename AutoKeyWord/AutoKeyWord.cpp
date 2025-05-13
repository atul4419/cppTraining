#include <iostream>
using namespace std;

//auto key word use to type deduction it is a feature of c++ 11

class TypeDeduction{

private:
    int num1;
    float num2;
    double num3;
    char ch;
    bool bln;
    // auto at = 25; 
    //The issue in your code is that you’re trying to use the auto keyword for a member variable in a class. The auto keyword is used for automatic type deduction but cannot be used as a member variable type in a class. 
    // Instead, you need to explicitly declare the type of the member variable.
public:
void printTypeName(){
cout << typeid(num1).name() << endl;
cout << typeid(num2).name() << endl;
cout << typeid(num3).name() << endl;
cout << typeid(ch).name() << endl;
cout << typeid(bln).name() << endl;
}
};

int main(){
TypeDeduction tyd;
tyd.printTypeName();


auto var1 = 20;
auto var2 = 20.0;
auto var3 = false;
// auto var1 = arr[10]; 
// it's essential to ensure that the array you're accessing has been properly declared and initialized.

//To fix the above compilation issue.
int arr[20]; // Declare an array with 20 elements
auto var4 = arr;
cout << typeid(tyd).name() << endl;
cout << typeid(var1).name() << endl;
cout << typeid(var2).name() << endl;
cout << typeid(var3).name() << endl;
cout << typeid(var4).name() << endl;
}