#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter a:";
cin>>a;
cout<<"Enter b:";
cin>>b;
cout<<"Enter c:";
cin>>c;
int sum;
sum=a+b+c;
if(sum==180)
cout<<"valid";
else
cout<<"Invalid";
return 0;    
}
//triangle is only valid if a+b+c=180