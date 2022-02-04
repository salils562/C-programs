//funtion overloading //we can have multiple constructors in a class
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){     // -->> default constructor
        a=0;b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void print(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
complex c1(4,5),c2(3),c3;
c1.print();
c2.print();
c3.print();
return 0;
}