#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
class derived :private Base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    setData();
    data3 = data2 * getData1();
}
void derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "value of data 2 is " << getData2() << endl;
    cout << "value of data 3 is " << data3 << endl;
}
int main()
{
    derived der;
    der.process();
    der.display();
    return 0;
}