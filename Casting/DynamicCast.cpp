// Dynamic cast is run time check for proper downcasting.
// In order to perform dynamic cast class must contains one virtual function. i.e polymorphic nature.
//  it returns nullptr or bad_cast if casting fails.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void printName()
    {
        cout << "I am Base" << endl;
    }
    // void  printName()
    // {
    //     cout << "I am Base" << endl;
    // }
};

class Derived1 : public Base
{
public:
    void printName()
    {
        cout << "I am Derived1" << endl;
    }
};

class Derived2 : public Base
{
public:
    void printName()
    {
        cout << "I am Derived2" << endl;
    }
};

int main()
{
    // Case 1
    //     Base *base = new Base;
    //    // Derived1 *D1 = dynamic_cast<Derived1*>(base); in order to perform dynamic cast there must be one virtual function.
    //    Derived1 *derived1 = dynamic_cast<Derived1*>(base);
    // if(derived1){
    //    derived1->printName();
    // }else {
    //     cout << "Null" << endl;
    // }

    // Case 2
    //     Base *base = new Derived1;
    //    // Derived1 *D1 = dynamic_cast<Derived1*>(base); in order to perform dynamic cast there must be one virtual function.
    //    Derived1 *derived1 = dynamic_cast<Derived1*>(base);
    // if(derived1){
    //    derived1->printName();
    // }else {
    //     cout << "Null" << endl;
    // }

    // Case 3
    //     Base *base = new Derived2;
    //    // Derived1 *D1 = dynamic_cast<Derived1*>(base); in order to perform dynamic cast there must be one virtual function.
    //    Derived2 *derived2 = dynamic_cast<Derived2*>(base);
    // if(derived2){
    //    derived2->printName();
    // }else {
    //     cout << "Null" << endl;
    // }

    // Case 4

    Base *base = new Derived2;
    // Derived1 *D1 = dynamic_cast<Derived1*>(base); in order to perform dynamic cast there must be one virtual function.
    Derived2 *derived2 = dynamic_cast<Derived2 *>(base);
    if (derived2)
    {
        derived2->printName();
    }
    else
    {
        cout << "Null" << endl;
    }
    Derived1 *d1 = dynamic_cast<Derived1 *>(base);
    if (d1)
    {
        d1->printName();
    }
    else
    {
        cout << " d1 Null" << endl;
    }
}