#include<iostream> //funtion overloading
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
   return a+b+c; 
}
double sum(double a,int b)
{
return (a+b);    
}
int main(){
cout<<"The sum:"<<sum(1,2)<<endl;
cout<<"The sum:"<<sum(1,2,4)<<endl;
cout<<"The sum:"<<sum(1.47,5)<<endl;
return 0;
}
//funtion overloading is a part of polymosphism