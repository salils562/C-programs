#include<iostream>
using namespace std;
int main()
{
// As we know that natural numbers start from 1;
int n,i;
int sum=0;
float avg;
cout<<"Enter n:";
cin>>n;
for(i=1;i<=n;i++)    
{                    
sum=sum+i;
}
avg=sum/n;
cout<<"Average of first n numbers is:"<<avg<<endl;
}
