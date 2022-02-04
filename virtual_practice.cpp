#include<iostream>
using namespace std;
class A{
public:
virtual void display(){
    cout<<"Hello virtual class A"<<endl;
}
};
class B:public A{
public:
void display(){
cout<<"Hello class B"<<endl;
}
};
class C:public A{
public:
void display(){
    cout<<"Hello class C"<<endl;
}
};
int main(){
A *p[2];
B obj_b;
C obj_c;
p[0]=&obj_b;
p[1]=&obj_c;
(*p[0]).display();
p[1]->display();
return 0;
}