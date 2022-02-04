#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int n;
int *arr;
int r;
cout<<"Enter the size of array: ";
cin>>n;
arr=(int *)malloc(n*sizeof(int));
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];
for (int i=0;i<(n/2);i++)
{
r=arr[i];
arr[i]=arr[(n-1)-i];
arr[(n-1)-i]=r;
}
cout<<"reversed array is "<<endl;
for(int i=0;i<n;i++)
cout<<arr[i]<<"\t";
return 0;
}