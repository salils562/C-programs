#include<iostream>
using namespace std;
class BaseClass{
public:
int var_base=1;
void display(){
    cout<<"Displaying Base Class variable var_base = "<<var_base<<endl;
}
};
class DerivedClass:public BaseClass{
public:
int var_deri=2;
void display(){
    cout<<"displaying base class variable var_base = "<<var_base<<endl;
    cout<<"Displaying derived class variable var_deri = "<<var_deri<<endl;
}
};
int main(){
    BaseClass *base_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_pointer=&obj_derived; //pointing to derived class
    // base_pointer->var_base=65;
    //base_pointer->display(); //it can only access the functions of base class.
    
    // Lets go to derived class pointer
    DerivedClass *derived_pointer;
    derived_pointer=&obj_derived;
    derived_pointer->var_base=63;
    derived_pointer->var_deri=76;
    derived_pointer->display();
    return 0;
}