#include<iostream>
using namespace std;
/* 
Syntax for initialization list in constructors:
Constructor (argument-list) : initialization-section
{
    assignment + other code;
}
*/
class Test{
    int a,b;
    public:
    //Test(int i,int j):a(i),b(j)
    //Test(int i,int j):a(i),b(j+3) //we can do this also
    //Test(int i,int j):a(i),b(j*i) //we can do this also
    //Test(int i,int j):a(i),b(a*j) //we can do this also
    //Test(int i,int j):b(i),a(b*j) //it will give garbage value. since a is declared before b;
    Test(int i,int j):a(i),b(a*j)
    {
        cout<<"values filled"<<endl;
    }
    void showData(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};
int main(){
Test t(4,3);
t.showData();
return 0;
}