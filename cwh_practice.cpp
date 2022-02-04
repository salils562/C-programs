#include<iostream>
using namespace std;

class A{
protected:
int a;
int b;    
public:
A(){
    cout<<"Inside class A"<<endl;
}
A(int c,int d){
    a=c;
    b=d;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
}
};
class B:public A{
protected:
int c,d;    
public:
B(){
    cout<<"Inside class B"<<endl;
}
B(int a,int b,int f,int l):A(a,b){
c=f;
d=l;
cout<<"The value of c is "<<c<<endl;
cout<<"The value of d is "<<d<<endl;
}
};
class C:public A{
public:
C(){
    cout<<"Inside class C"<<endl;
}
};
class D:virtual public B,virtual public C{
public:
D(){
    cout<<"Inside class D"<<endl;
}
};
int main(){
D f;
return 0;
}