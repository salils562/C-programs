#include<iostream>
using namespace std;
template <class T>
void sum(T a,T b){
cout<<"sum of two numbers is "<<(a+b)<<endl;
}
int main(){
    int c,d;
    cout<<"Enter value of c and d ";
    cin>>c>>d;
    sum<int>(c,d);
    return 0;
}