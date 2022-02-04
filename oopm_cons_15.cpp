#include <iostream> // copy constructor
using namespace std;
// There is a default copy constructor if we didn't maid it.
class Number
{
    int a;

public:
    Number() { a = 0; }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    { // -->> Copy constructor
        cout << "Copy constructor got called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    // Number z1(x); // Copy constructor envoked
    // z1.display();
    z2 = z;
    z2.display();
    Number z3 = z; // since in this line only object got made so the copy constructor got called.
    z3.display();
    // z1 should exactly resembel another object
    return 0;
}