//HOW TO STOP COPYIENG YOUR OBJET HERE AND THERE

//1. delete copy constructor and assignment operator from your class.
//2. Make copy constructor and assignment operator private.
//3. Inherit the class whose  assignment operator and copy constructor is private, you don't need to modify your class.

// 
#include <iostream>
using namespace std;

// class Example1{
//     int num;

//     public: 
//     Example1(int _num) : num(_num){cout << num << endl;};
//     Example1(const Example1 &rhs ) = delete;
//     Example1 operator=(const Example1& rhs) = delete;

// };

// int main(){ 
//     Example1 exmple(10);
//     Example1 exmple2(20);
//     Example1 exmple3(30);
// //exmple = exmple2;

// }




//Example 2
// class Example2{
//     int num;
//     Example2(const Example2 &rhs ) = delete;
//     Example2 operator=(const Example2& rhs) = delete;

//     public: 
//     Example2(int _num) : num(_num){cout << num << endl;};

// };

// int main(){
//     Example2 exmple(10);
//     Example2 exmple2(20);
//     Example2 exmple3(30);
//     exmple = exmple2;

// }



//Example 3

// class Example2{
//     int num;
//     Example2(const Example2 &rhs ) = delete;
//     Example2 operator=(const Example2& rhs) = delete;

//     public: 
//     Example2(int _num) : num(_num){cout << num << endl;};
//     Example2() = default;
// };

// class Example3 : public Example2 {

//     int num;
//     public: 
//     Example3() = default;
//     Example3(int _num) : num(_num){cout << num << endl;};
// };
// int main(){
//     Example2 exmple(10);
//     Example2 exmple2(20);
//     Example2 exmple3(30);
//    // exmple = exmple2;

// }