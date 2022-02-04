/* 
representation --> >>
It needs two operands.
It shift each bit from left to right.
*/
#include<iostream>
using namespace std;

int main(){
int rem;    
int arr[100],i=0,n=0;
int a;
cout<<"Enter number to get it binary digit: ";
cin>>a;
int num=a;
while(a!=0){
   rem=a%2;
   a=a/2;
   arr[i]=rem;
   i++;
   n++;
}
int temp;
for(int i=0;i<n/2;i++)
{
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
cout<<"Binary representation of "<<num<<" is: ";
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
cout<<endl;
cout<<"The right shift of "<<num<<" is: "<<(num>>2)<<endl;
cout<<"The left shift of "<<num<<" is: "<<(num<<2)<<endl;
return 0;
}