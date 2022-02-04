//Creating a constructor
//Constructor is a special member function with same name as of the class.
// It is used to initialize the objects of its class
// constructor is already envoked
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void){     /* -->> this is a default constructor. constructor name should be class name */
    a=0;
    b=0;
    }
    Complex(int a1, int b1); // constructor declartion
    void printData()
    {
        cout << a << " and " << b << endl; 
    }
};
Complex ::Complex(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    Complex c(2, 4),c1;
    c.printData();
    c1.printData();
    return 0;
}
// charateristics of constructor
/* 
(*) Constructor name should be class name.
(*) Constructor should be defined inside public class.
(*) They are automatically envoked when object is created.
(*) Do not have return types and do not return values.
(*) It can have default arguments.
(*) We cannot refer to their address.
*/