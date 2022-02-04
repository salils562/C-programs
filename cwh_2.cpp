#include<iostream>
using namespace std;
int main(){
// what is a pointer?---> data type which holds the address
// of other data types
int a=3,z=3;
int *s;
s=&z;
int *b=&a;
int **c=&b;
cout<<*b<<endl;
cout<<**c<<endl; //pointer to the pointer
cout<<"The address of z is :"<<s; 
return 0;
}
// Note:- 
// & --> address of operator
// * --> dereference operator