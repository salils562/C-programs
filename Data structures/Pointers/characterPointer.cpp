#include<iostream>
using namespace std;

int main(){
char ch='a';
char ss[6]="salil";
char *p=&ch;
cout<<*p<<endl;
p=ss;
cout<<p<<endl;
return 0;
}