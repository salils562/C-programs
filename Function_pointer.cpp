#include<iostream>
using namespace std;
void abc(void){
    cout<<"I am abc function!"<<endl;
}
void xyz(int a){
    cout<<"I am xyz function!"<<endl;
}
void add(int x,int y){
    cout<<"The sum of two values is "<<(x+y)<<endl;
}
void sub(int a,int b){
    cout<<"The difference of two values is "<<(a-b)<<endl;
}
int main(){
void (*ptr)(void);
void (*addi)(int,int);
addi=&add;
(*addi)(3,3);
ptr=&abc;
(*ptr)();
return 0;
}