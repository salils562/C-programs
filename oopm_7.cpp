#include <iostream>
using namespace std;
//forward declarations
class Y;

class X
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int data;
    
public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "summing datas of x and y objects gives me: " << o1.data + o2.data << endl;
}
int main()
{
    X a;
    Y b;
    a.setData(3);
    b.setValue(4);
    add(a, b);

    return 0;
}