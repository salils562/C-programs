#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};
int main()
{
    complex c1;
    complex *ptr = new complex; //This also a way to create object using pointer.
    //complex *ptr = &c1;         //This is how to point an object with the help of pointer.
    /*using brakets in ptr is very important ,
because (.) operator has much presidence than
(*) operator
*/
     ptr->setData(1, 54); //dereferencing operator
    (*ptr).getData();
    return 0;
}