#include<iostream>
using namespace std;

class Base{
private:
int a,b;
public:  
friend void function(Base);  
Base(){
a=0;
b=0;
}
Base(int a,int b){
this->a=a;
this->b=b;    
}
};

void function(Base ac){
cout<<ac.a<<" + "<<ac.b<<"i"<<endl;
}
int main(){
    Base a(3,4);
    function(a);
    return 0;
}