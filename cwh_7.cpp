#include<iostream>
using namespace std; //inline function
inline int prod(int a,int b) //it expands size of code but it is faster
{
return a*b;    //we should only use inline function when our function code is for very small purpose.
}
void area(float &ar,int r=2)
{
float PI=3.14;    
ar=PI*r*r;
}
int main(){
float are;
int r=3;
area(are,r);
cout<<are;

// int a,b;
//cout<<"Enter the value of a and b:";
//cin>>a>>b;
// int x=4,y=7;
//cout<<"product of a and b is:"<<prod(a,b)<<endl;
//cout<<"product of a and b is:"<<prod(a,b)<<endl;
//cout<<"product of a and b is:"<<prod(a,b)<<endl;
//cout<<"product of a and b is:"<<prod(a,b)<<endl;
//cout<<"product of a and b is:"<<prod(a,b)<<endl;
//cout<<"product of a and b is:"<<prod(a,b)<<endl;
//cout<<"product of a and b is:"<<prod(x,y)<<endl;
return 0;
}