#include<iostream>
using namespace std;

class simple{
    protected:
    int a,b;
    public:
    void setData(int c,int d){
        a=c;
        b=d;
    }
    void showData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }

};
int main(){
    simple *ptr=new simple[3];
    ptr[0].setData(4,5);
    ptr[0].showData();
    (ptr+1)->setData(6,7);
    (ptr+1)->showData();
    (ptr+2)->setData(40,50);
    (ptr+2)->showData();
    simple p;
    simple *s;
    s=&p;
    (*s).setData(80,60);
    (*s).showData();
    simple *q=new simple;
    (*q).setData(45,56);
    (*q).showData();
    return 0;
}