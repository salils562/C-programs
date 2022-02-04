#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 4)
    { //constructor with default arguments.
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print()
    {
        cout << data1 << ", " << data2 << " and " << data3 << endl;
    }
};
int main()
{
    simple s(1, 3);
    simple s1(2);
    s.print();
    s1.print();
    return 0;
}