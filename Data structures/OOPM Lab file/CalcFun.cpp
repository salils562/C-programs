#include<iostream>
using namespace std;

void add(float,float);
void difference(float,float);
void product(float,float);
void division(float,float);

int main(){
bool exit=true;
while(exit){
int n;    
cout<<"Press:\n1. Add two numbers\n"
    <<"2. Subtract two numbers\n"
    <<"3. product of two numbers\n"
    <<"4. division of two numbers\n"
    <<"5. Exit\n";
cin>>n;
float a,b;
if(n==1){
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;    
add(a,b);
}
else if(n==2){
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;     
difference(a,b);    
}
else if(n==3){
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;     
product(a,b);    
}
else if(n==4){
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;     
division(a,b);
}
else if(n==5){
exit=false;    
}
else{
    cout<<"Please enter valid statement"<<endl;
}
}
return 0;
}
void add(float a,float b){
cout<<"The sum of two numbers is: "<<(a+b)<<endl;
}
void difference(float a,float b){
cout<<"The difference of two numbers is: "<<(a-b)<<endl;
}
void product(float a,float b){
cout<<"The product of two numbers is: "<<(a*b)<<endl;
}
void division(float a,float b){
cout<<"The division of two numbers is: "<<(a/b)<<endl;
}