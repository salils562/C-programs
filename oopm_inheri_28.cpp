#include<iostream>
using namespace std;
// new keyword
int main(){
int *p= new int(40);
float *a=new float(48.02);
cout<<"the value at address p is "<<*(p)<<endl;
cout<<"the value at address a is "<<*(a)<<endl;

//we can create these arrays dynamically
int *arr=new int[3];
arr[0]=10;
arr[1]=20;
arr[2]=30;
cout<<"The value at arr[0] is "<<arr[0]<<endl;
cout<<"The value at arr[1] is "<<arr[1]<<endl;
cout<<"The value at arr[2] is "<<*(arr+2)<<endl;

//Delete operator
//syntax :- delete arr;
return 0;
}