#include <iostream>
using namespace std;
class complex
{
private:
    int a, c, d;
    int b;

public:
    void showData(int x, int y);
    void sumData(complex a1, complex b1);
    void display()
    {
        cout << "The sum of complex no. is " << a << " + " << b << "i" << endl;
    }
};
void complex :: showData(int x, int y)
{
    c = x;
    d = y;
    cout << "complex number: " << x << " + " << y << "i" << endl;
}
void complex :: sumData(complex a1, complex b1)
{
    a = a1.c + b1.c;
    b = a1.d + b1.d;
}
int main()
{
    complex c1, c2, c3;
    c1.showData(2, 3);
    c2.showData(3, 4);
    c3.sumData(c1, c2);
    c3.display();
    return 0;
}