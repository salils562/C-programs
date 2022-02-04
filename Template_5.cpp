#include<iostream>
using namespace std;
template <class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg =(a+b)/2.0;
    return avg;
}
template <class T1>
void swapp(T1 &x,T1 &y){
T1 temp=x;
x=y;
y=temp;
}
int main(){
float a=funcAverage(3,2.5);
cout<<"The average of two numbers is "<<a<<endl;
float x=3.3,y=5.4;
swapp(x,y);
cout<<"value of x is "<<x<<endl<<"value of y is "<<y<<endl;
return 0;
}