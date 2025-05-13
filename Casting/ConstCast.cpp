#include<iostream>
using namespace std;

//const_cast<T>(v) 

//The expression const_cast<T>(v) can be used to change the volatile or constness.
//Where T must be a pointer, reference, or pointer-to-member type.

// const_cast
// The const_cast operator in C++ is used to cast away the const (or volatile) attribute of a variable.
//  This allows you to modify a const variable or pass it to a function that does not take a const parameter. However, 
// it should be used with caution as it can lead to undefined behavior if used incorrectly.

// it returns a reference or pointer to the same object, but with the specified qualifiers removed.

//const_cast<new_type>(expression)


//Example 1
 int main() {
//     int b = 10;           // Declare a non-constant integer
//     const int *ptr = &b;  // ptr is a pointer to a constant integer
    
//     int *ptra = const_cast<int*>(ptr); // Remove constness
//     *ptra = 25;            // Modify the value of b through ptra
//     //it can lead to undefined behavior

//     std::cout << "b = " << b << std::endl; 
//     std::cout << "*ptra  = " << *ptra  << std::endl; 

int a2 = 20;
const int* ptr = &a2; // Use a non-const pointer
//*ptr = 30;     
//*ptr = 30;: Attempts to modify the value of a2 through ptr, which is not allowed because ptr is a pointer to a constant integer.

std::cout << "a2 = " << a2 << std::endl; // Output will be 30

int *ptrb = const_cast<int *>(&a2);
*ptrb  = 500;

std::cout << "a2 = " << a2 << std::endl; // Output will be 30
std::cout << "ptrb = " << *ptrb << std::endl; // Output will be 30

    return 0;
}

//Example 2


// class ThirdPartyLib {
//     public:
//     void func(int &x){
//         x = 50;
//         cout << x << endl;
//     }

// };
// int main(){

//     const int a = 20;
//     ThirdPartyLib thrdlb;

//    // thrdlb.func(a); compile time error
//    thrdlb.func(const_cast<int &>(a));

// }


//Example 3 remove constness of pointer

// class ThirdPartyLib {
//     public:
//     void func(int &x){
//         x = 50;
//         cout << x << endl;
//     }

//     void funcpointer(int *x){
//         int a = 500;
//         x = &a;
//         *x = 50000;
//         cout << x << endl;
//          cout << &a << endl;
//         cout << *x << endl;
//     }
// };
// int main(){

//     const int a = 20;
    
//     const int *ptr = &a;
//     const int *ptra = ptr;
// int acptr = const_cast<int &> (a);
// int *ptr2 = const_cast<int *> (ptra);

//     ThirdPartyLib thrdlb;
// cout << a << endl;
// cout << &a << endl;
// cout << ptr << endl;
// cout << ptra << endl;
// cout << &acptr << endl;
// cout << ptr2 << endl;
//    thrdlb.funcpointer(ptr2);
// cout << ptr2 << endl;
//    // thrdlb.func(a); compile time error
//    thrdlb.func(acptr);

// }