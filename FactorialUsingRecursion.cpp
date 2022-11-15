#include<iostream>
using namespace std;
void Factorial(int num,int fact){
    if(num>=1){
    fact=fact*num;
    num--;
    Factorial(num,fact);
    }
    else{
        cout<<"The factorial of number is "<<fact<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    Factorial(num,1);
    return 0;
}