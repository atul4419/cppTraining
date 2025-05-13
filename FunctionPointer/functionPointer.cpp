#include<iostream>
using namespace std;

// int printFunctionPointer(int num1, int num2){
//     cout << "I am Function Pointer" << endl;
//     cout << num1 << "  " << num2 << endl;
//     return 0;
// }
// //creating a function pointer
// typedef int (*pFunc)(int , int);
// int main(){
// pFunc functionptr = &printFunctionPointer;
//      cout << functionptr << endl << endl; 
//      // The memory address of the function pointer printed as 1 in the output is likely due to the use of the << operator in cout. 
//      // When you try to print a function pointer using cout, it interprets the pointer's address as an integer and prints it in a human-readable format, typically hexadecimal.
//      // However, in some environments or compilers, this behavior may not work as expected, resulting in unusual outputs like 1.
//      // To confirm the actual address, you can cast the function pointer to void* before printing it:
//     cout << std::hex << (void *)functionptr << endl << endl << endl;
//     cout << functionptr(9,10) << endl; //Calling a function pointer
// }



    //How to pass a funtion pointer to function


//     int sum(int num1,int num2){
//         return num1 + num2;
//     }

// typedef int (*fpSum) (int, int);

// int calc(fpSum funptr,int num1, int num2, char ch){
//     switch (ch) {
//         case 'a' :
//         return funptr(num1,num2);
//         default:{
//         cout << "Invalid call " << endl;
//         return -1;
//         }
        
//     }
// }

// int main(){

//     fpSum funptr = &sum;
//     cout << calc(funptr,10,10,'a') << endl;
//     return 0;
// }

//HOW TO RETURN FUNCTION POINTER

// int subtract(int num1, int num2){
//     return num1 - num2;
// }
// int add(int num1, int num2){
//     return num1 + num2;
// }
// int mathfunc(int num1, int num2){
//     return num1 + num2;
// }

// typedef int (*fpmathfunc) (int, int); // Here prototype is same for add and subtract function


// fpmathfunc getMathFunction(char ch){
//     switch(ch){
//         case  'a' :
//         return add;
//         case 's':
//         return subtract;
//         default:
//         return nullptr;
//     }
// }
// int main(){

// fpmathfunc funcadd = getMathFunction('a');
// cout << funcadd(10,10) << endl << endl;

// fpmathfunc funcsub = getMathFunction('s');
// cout << funcsub(20,10) << endl << endl;

// }

//CREATE AN ARRAY OF FUNCTION POINTER

// int subtract(int num1, int num2){
//     return num1 - num2;
// }
// int add(int num1, int num2){
//     return num1 + num2;
// }
// typedef int (*mathfunc)(int, int );

// mathfunc arr[2] = {add,subtract};



//WHEN TO USE FUNCTION POINTER 
