#include<iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(int a1,int b1){   // --> parameterised contructor 
    a=a1;
    b=b1;
    }
    void printData()
    {
        cout << a << " and " << b << endl; 
    }
};
int main(){
// Implicit call   
Complex a(1,3);
// Explicit call
Complex b = Complex(3,3);
a.printData();
b.printData();
return 0;
}