#include<iostream>
using namespace std;
int main()
{
int n,i,j;
int sum=1;
cout<<"Enter n:"; //find sum of first n prime numbers
cin>>n;
for(i=2;i<=n;i++)    // 1,2,3,5,7,11
{
for(j=2;j<=i;j++)
{
if(j==i)
{
sum=sum+i;
}
if(i%j==0)
break;
}
}
cout<<"Sum of first n prime numbers is:"<<sum<<endl;
return 0;
}