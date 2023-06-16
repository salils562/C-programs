#include<iostream>
using namespace std;

int factorial(int num){    
if(num==1){
    return 1;
}else{
    return num*factorial(num-1);
}
}
int main(){
    int num;
    cout<<"Enter any number "<<endl;
    cin>>num;
    cout<<"Factorial of a number is "<<factorial(num)<<endl;
    return 0;
}