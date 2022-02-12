#include<iostream>
using namespace std;
void swap(int &a,int &b){
int temp;
temp=a;
a=b;
b=temp;
}
int main(){
    int a,b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"After swapping..."<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    return 0;
}