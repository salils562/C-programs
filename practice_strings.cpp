#include<iostream>
#include<cstdio>
using namespace std;
void display(char *s){
cout<<"The name of participant is "<<s<<endl;
}
int main(){
char name[20];
cout<<"Enter the name:";
cin>>name;
display(name);
return 0;
}