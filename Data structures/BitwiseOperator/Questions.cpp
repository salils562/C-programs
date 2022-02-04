#include<iostream>
using namespace std;

int main(){
/* 
int a=1,b=2;
    if(a-- >0 && ++b > 2){ // a=0 , b=3
    cout<<"Stage-1 inside if"<<endl;
}
else{
    cout<<"Stage-2 Inside else"<<endl;
}
cout<<a<<" "<<b<<endl;
*/
/*
int a,b=1;
a=10;
if(++a)
cout<<b;
else
cout<<++b;  // Output: 1
*/
/*
int number=3;
cout<<(25*(++number))<<endl; // 100
*/
int a=1;
int b=a++;
int c=++a;
cout<<b<<endl;//1
cout<<c;//3
return 0;
}