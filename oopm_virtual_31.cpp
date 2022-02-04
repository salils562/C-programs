#include<iostream>
using namespace std;
class BaseClass{
public:
int var_base=1;
virtual void display(){
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
BaseClass *base_ptr;
BaseClass obj_base;
DerivedClass obj_deri;
base_ptr=&obj_deri;
base_ptr->display();
return 0;
}