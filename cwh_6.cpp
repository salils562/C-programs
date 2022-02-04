#include<iostream> //call by reference
using namespace std;
// call by reference using pointers
void swap(int *x,int *y)
{
int s;
s=*x;
*x=*y;
*y=s;
}
// call by reference using C++ reference variable
// very important
void swapCRed(int &x,int &y)
{
int s;
s=x;
x=y;
y=s;
}
int main(){
int a=2;
int b=3;
// swap(&a,&b); 
cout<<a<<" and "<<b<<endl;
swapCRed(a,b);
cout<<"this will also swap values of a and b: "<<a<<" "<<b;
return 0;
}