#include<iostream>
using namespace std;
void table(int);
int main()
{
int num,i,fact;
cout<<"Enter number:";
cin>>num;
table(num);
return 0;
}
void table(int n)
{
int fact,i;
fact=n;
for(i=1;i<=10;i++)
{
fact=n*i;
cout<<n<<"x"<<i<<"="<<fact<<endl;
}
}