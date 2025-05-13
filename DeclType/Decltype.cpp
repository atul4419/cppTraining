#include<iostream>
using namespace std;

// needs more clarification 


// int sum(int a , int b){
//     return a+ b;
// }

// int main(){
//     int a = 50, b = 50;
//     cout << sum(a,b) << endl;
//     return 0;
// }

template<typename T1, typename T2>
T2 add(T1 a,T2 b){
    return a + b;
}

template<typename T1, typename T2>
auto addusingauto(T1 a,T2 b){
    return a + b;
}

// template<typename T1, typename T2>
// auto addusingdecltype(T1 a,T2 b) -> decltype(a+b){
//     return a + b;
// }
int main(){
    int a = 10, b = 20;
    double da = 30.1, db = 20.1;

    // cout << add(a,b) << endl;
    // cout << add(a,db) << endl;
    // cout << add(da,a) << endl;
    // cout << add(da,db) << endl;


    // cout << addusingauto(a,b) << endl;
    // cout << addusingauto(a,db) << endl;
    // cout << addusingauto(da,a) << endl;
    // cout << addusingauto(da,db) << endl;

    // int p,q,r,s,t;
    
    // p = addusingauto(a,b);
    // q = addusingauto(a,db);
    // r = addusingauto(da,a);
    // s= addusingauto(da,db);
    // cout << p << endl;
    // cout << q << endl;
    // cout << r << endl;
    // cout << s << endl;
    return 0;


}