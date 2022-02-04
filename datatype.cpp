#include<iostream>
using namespace std;
void add(int,int);
int main()
{
int a=1,b=2;
cout<<"value  of a is ="<<a<<"\nvalue of b is ="<<b;
add(a,b);
return 0;    
}
void add(int x,int y)
{
int c;
c=x+y;
cout<<"\nsum of a and b is:"<<c;
}