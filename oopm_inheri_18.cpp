#include <iostream>
using namespace std;
// Base class
class Employee{
    public:
    int language=9;
    int id;
    float salary;
    Employee(){}
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
};

// Derived class syntax
/*
class {{derived class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
// Creating a programmer class derived from base class
/*
1. default visibility mode is private.
2. private visibility mode: Public members of the base class becomes
private members of the derived class.
3. public visibility mode: public members of the base class becomes
public members of the derived class.
4. private member of base class never inherited.
*/
class Programmer :public Employee{
    public:
    Programmer(int inpId){
        id=inpId;
    }
    void getData(){
        cout<<id;
    }
};

int main()
{
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer salil(10);
    cout<<salil.language<<endl;
    salil.getData();
    return 0;
}
