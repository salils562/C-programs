#include<iostream>
using namespace std;
template <class T1=int,class T2=float> //Default template class
class Harry{
public:
T1 a;
T2 b;
Harry(T1 x,T2 y){
    a=x;
    b=y;
}
void display(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}
};
int main(){
Harry<> h(3,6.3);
h.display();
cout<<endl;
Harry<float,char> h1(3.3,'s');
h1.display();
return 0;
}