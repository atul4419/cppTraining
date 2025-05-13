//Frienfunction is use to access the private protected and public data member of the class
// you can not directly access the private and protected data member outside the class
//by using friend you can achieve it.

//USE Case
//example for Logging purpose, in case you want to check the health of our class you can create the friend function 
//that prints the current value of data members

//Limitation
//Here you can access the data member where friend function is declared like below example you can not access the data memeber s of it's parent
//class

// Similarly in real world you go to your friend house and you can acces the property of your friends but not his father's property




#include <iostream>

class Base {
int number1 ;
int number2 ;
int number3;
public:
Base():number1(1),number2(2),number3(3){}
friend void logBaseClass(const Base baseObj);
};

class Child : public Base{
int number1 ;
int number2 ;
int number3;
public:
Child():number1(4),number2(5),number3(6){}
friend void logChildClass(const Child baseObj);
};
void logBaseClass(const Base baseobj){
    std::cout << baseobj.number1 << std::endl;
    std::cout << baseobj.number2 << std::endl;
    std::cout << baseobj.number3 << std::endl;
}
void logChildClass(const Child baseobj){
    std::cout << baseobj.number1 << std::endl;
    std::cout << baseobj.number2 << std::endl;
    std::cout << baseobj.number3 << std::endl;
}
int main(){
    const Base base;
    const Child child;
    logBaseClass(base);
    logChildClass(child);
    //logBaseClass(child);
}

//Question 

//Create 5 class and create 1 generic function that prints the health of all classes.