// Swap two numbers using bit operators

#include<iostream>
using namespace std;

int main(){
int a=4;
int b=6;
a=a^b;
b=a^b;
a=a^b;
cout<<"Value of a is: "<<a<<endl;
cout<<"Value of b is: "<<b<<endl;
return 0;
}