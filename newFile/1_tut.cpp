#include<iostream>
using namespace std;
template<class T>
void sum(T a,T b){
    cout<<"the sum of two numbers is "<<(a+b)<<endl;
}
int main(){
string a,b;
a="salil";
b="anujm";
sum(a,b);
return 0;
}