#include<iostream>
using namespace std;
void func();
void func2(int,int);


int main()
{
int a=1,b=2;    
func2(a,b);  
func();  
return 0;
}


void func()
{
cout<<"Hi this is func"<<endl;
}


void func2(int a,int b)
{

cout<<"mul="<<a*b<<endl;
}