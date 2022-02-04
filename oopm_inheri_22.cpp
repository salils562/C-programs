/*
         multiple Inheritence
syntax for inheriting multiple inheritence : - 
 
class derived : visibility-mode base1, visibility-mode base2{
    class body of class derived;
}
*/
#include<iostream>
using namespace std;

class Base1{
    protected:
    int a;
    public:
    void getbase1(int d){
        a=d;
    }
};
class Base2{
    protected:
    int b;
    public:
    void getbase2(int d){
        b=d;
    }
};
class derived : public Base1,public Base2{
public:
void show(){
    cout<<"The value of base1 class is "<<a<<endl;
    cout<<"The value of base2 class is "<<b<<endl;
    cout<<"The sum of two numbers is "<<(a+b)<<endl;
}
};
int main(){
derived d;
int a,b;
cout<<"Enter two values ";
cin>>a>>b;
d.getbase1(a);
d.getbase2(b);
d.show();
return 0;
}