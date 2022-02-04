#include<iostream>
using namespace std;
int main()
{
// 0+1+1+2+3+5+8+.....
int n1=0,n2=1,n3,i;
int n;
cout<<"Enter n:";
cin>>n;
cout<<n1<<endl;
for(i=1;i<=n;i++)
{
n3=n1+n2;
cout<<n3<<endl;
n1=n2;
n2=n3;
}
return 0;
}