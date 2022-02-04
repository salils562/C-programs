#include<iostream>
using namespace std;

int main(){
bool exit=true;
while(exit){
cout<<"Press:\n1. Add two numbers\n"
    <<"2. Subtract two numbers\n"
    <<"3. product of two numbers\n"
    <<"4. division of two numbers\n"
    <<"5. Exit\n";
int num;
cin>>num;    
switch (num)
{
case 1:
    float a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"The sum of two numbers is: "<<(a+b)<<endl;
    break;
case 2:
    float c,d;
    cout<<"Enter a: ";
    cin>>c;
    cout<<"Enter b: ";
    cin>>d;
    cout<<"The difference of two numbers is: "<<(c-d)<<endl;
    break;
case 3:
    float f,s;
    cout<<"Enter a: ";
    cin>>f;
    cout<<"Enter b: ";
    cin>>s;
    cout<<"The product of two numbers is: "<<(f*s)<<endl;
    break;
case 4:
    float e,h;
    cout<<"Enter a: ";
    cin>>e;
    cout<<"Enter b: ";
    cin>>h;
    cout<<"The product of two numbers is: "<<(e/h)<<endl;
    break;
case 5:
    exit=false;
    break;    
default:
    cout<<"Please enter valid statement"<<endl;
    break;
} 


}      
return 0;
}