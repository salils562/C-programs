#include<iostream>
using namespace std;

int main(){
int arr[]={1,2,3,5};
int *p=arr;
/*
cout<<"The address of 1st index is "<<p<<endl;
cout<<"The address of 1st index is "<<arr<<endl;
cout<<"The address of 1st index is "<<&arr[0]<<endl;
cout<<"The address of 3rd index is "<<&arr[2]<<endl;
cout<<"The address of 3rd index is "<<(p+2)<<endl;
*/
int a=5;
p=&a;
*p=*p +1;
cout<<"The updated value of a using pointer is "<<a<<endl;


return 0;
}