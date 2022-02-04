#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public: 
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex addComplex(Complex a1, Complex a2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex addComplex(Complex a1, Complex a2)
{
    Complex c3;
    c3.setNumber((a1.a + a2.a), (a1.b + a2.b));
    return c3;
}
int main()
{
    Complex c1, c2, sum, c4;
    c1.setNumber(2, 3);
    c1.printNumber();
    c2.setNumber(4, 5);
    c2.printNumber();
    sum = addComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/* Properties of friend funtion 
1. Not in the scope of class, only it gives permission to function
   to access the data of a class
2. since it is not int he scope of the class, it cannot be called from the object 
   of the class.
3. Can be invoked without the help og any object.  
4. Usually contains the objects as arguments.
5. Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name
   to access any member.
*/