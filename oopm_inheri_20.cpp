#include <iostream>
using namespace std;

class Base
{
protected:  //protected is a variable which is private but can be inherited. 
int a=3;
int b=4;
private:
int d=6;
public:
int c=7;
int getDatad(){
    return d;
}     
};
class Derived:protected Base
{
public:
int e=8;
void display(){
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"value of c is "<<c<<endl;
    cout<<"value of d is "<<getDatad()<<endl;
}
};
int main()
{
   Derived d;
   d.display();
   cout<<"value of e is "<<d.e;
   return 0;
}
/* 
                    Public derivation               private derivation              protected derivation
1.Private members:     Not inheritable               not Inheritable                 not inherited
2.Protected members:   protected                        private                         protected                    
3.Public members:      public                           private                         protected

*/