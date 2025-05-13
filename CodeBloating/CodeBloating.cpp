#include<iostream>
using namespace std;


//Code bloating is the term, when we crate un neccessary variable or code that increase the image size and delays the the program execution

//example

int main(){

    string WWW = "www";
    //string WWW("www");
    string GOOGLE = "google";

    string COM = "com";

    string Address = WWW + "." + GOOGLE+ "." + COM; // Here we create unessary variable and concatinate the string 
    //this leads to code bloating

    string address = "www.google.com";

    cout << Address << endl;
    cout << address << endl;
    cout << "www.google.com" << endl;
return 0;


}