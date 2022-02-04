// using scope resolution operator
#include<iostream>
using namespace std;
template <class T>
class Harry{
public:
T data;
Harry(T a){
    data=a;
}
void display();
};
template <class T>
void Harry<T>::display(){
    cout<<"the value of data is "<<data<<endl;
}
void func(int a){
cout<<"The value of a is "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"The value templatized a is "<<a<<endl;
}
int main(){
// Harry <float> h(3.8);
// h.display();
func(4); // Exact match takes the highest priority
return 0;
}