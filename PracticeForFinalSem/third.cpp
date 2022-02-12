#include<iostream>
using namespace std;
class Areas{
private:
int rad;
protected:
int l,b;
public:
void AreaOfCirc(int rad){
this->rad=rad;
cout<<"Area of circle is: "<<(3.14*rad*rad)<<endl;
}
};
class areas:public Areas{
public:
void AreaOfRec(int l,int b){
this->l=l;
this->b=b;
cout<<"Area of rectangle is: "<<(l*b)<<endl;
}
};
int main(){
areas a1;
a1.AreaOfCirc(2);
a1.AreaOfRec(4,5);
return 0;    
}