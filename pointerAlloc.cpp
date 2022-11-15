#include<iostream>
using namespace std;

void changingValue(int *p){
    int *y=p;
    int value=5;
    *y=value;
}

int main(){
   
   int a=3;
   int *p=&a;
   changingValue(p);
   cout<<*p;

    return 0;
}