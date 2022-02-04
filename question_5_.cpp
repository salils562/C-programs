#include<iostream>
using namespace std;
// clearing pointer concept 
int main(){
int a=3;
int *p,*q;
p=&a;
q=p;
cout<<"address of a is "<<p<<endl;
cout<<"value of a is "<<*p<<endl;
cout<<"address of a is "<<q<<endl;
cout<<"value of a is "<<*q<<endl;
return 0;
}