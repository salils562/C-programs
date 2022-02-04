// Ambibuity operations
#include<iostream>
using namespace std;

class Base1{
public:
void greet(){
    cout<<"How are you?"<<endl;
}
};
class Base2{
public:
void greet(){
    cout<<"Kaise ho?"<<endl;
}
};
class derived : public Base1,public Base2{
int a;
public:
void greet(){
Base1::greet();
}
};
class B{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D:public B{
    int a;
    // D's new say method will override base say() method
    public:
    void say(){
        cout<<"Hello my beautiful people"<<endl;
    }
};
int main(){
// Ambibuity 1     
Base1 b1obj;
Base2 b2obj;
derived d;
d.greet();
/* Ambibuity 2
D d;
d.say(); */
return 0;
}