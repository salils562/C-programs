/* 
Templates with multiple parameters:-
template<class T1,class T2>
class nameOfClass{

};
*/
#include<iostream>
using namespace std;
template<class T1,class T2>
class myClass{
T1 data1;
T2 data2;
public:
myClass(){}
myClass(T1 d,T2 d2){
    data1=d;
    data2=d2;
}
void display(){
    cout<<this->data1<<endl;
    cout<<this->data2<<endl;
}
};
int main(){
myClass<int,char> obj(2,'s');
obj.display();
myClass<int,string> obj2(3,"salil");
obj2.display();
return 0;
}