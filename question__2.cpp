#include<iostream>
using namespace std;
int main()
{
int num;
int reversed;
cout<<"Enter the number:";
cin>>num; 
int num1=num;
int a,b,c,d,e;
a=num%10;
num=num/10; 
b=num%10;
num=num/10;
c=num%10; 
num=num/10;
d=num%10;
num=num/10;
e=num; 
reversed=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
cout<<reversed<<endl; 
if(num1==reversed){
 cout<<"Equal";
}
else
{
cout<<"not equal";    
}
return 0;
}
