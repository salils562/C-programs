#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The values of a is "<<*p<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<p<<endl;
    return 0;
}