#include<iostream>
using namespace std;
template <class T,class T1,class T2,class T3,class T4>
void sum(T a,T1 b,T2 c,T3 d,T4 e){
    cout<<"The sum of numbers is "<<(a+b+c+d+e)<<endl;
}
int main(){
    sum(5.7,8.9,7,7.9,4);
return 0;
}