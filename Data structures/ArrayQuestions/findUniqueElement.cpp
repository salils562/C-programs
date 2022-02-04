#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the size of array: ";
cin>>n;
int *arr;
arr=new int[n];
for(int i=1;i<n;i++){
arr[i-1]=i;
}
int put;
cout<<"Enter an extra element you want to put: ";
cin>>put;
arr[n-1]=put;
int val=0;
for(int i=0;i<n;i++){
    val=val^arr[i];
}
for(int i=0;i<n;i++){
    val=val^i;
}
cout<<"The extra element you entered is: "<<val<<endl;
return 0;
}