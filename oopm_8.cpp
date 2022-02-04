#include <iostream>//Its great to use friend function
using namespace std;
class c2;
class c1
{
    int val;

public:
    void indata(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
    friend void swap(c1 &, c2 &);
};
class c2
{
    int val;

public:
    void indata(int a)
    {
        val = a;
    }
    void display()
    {
        cout << val << endl;
    }
    friend void swap(c1 &, c2 &);
};
void swap(c1 &o1, c2 &o2)
{
    int s;
    s = o1.val;
    o1.val = o2.val;
    o2.val = s;
}
int main()
{
    c1 a;int a1;
    c2 b;int a2;
    cout<<"Enter a:";
    cin>>a1;
    cout<<"Enter b:";
    cin>>a2;
    a.indata(a1);
    a.display();
    b.indata(a2);
    b.display();
    cout << "After swapping" << endl;
    swap(a, b);
    a.display();
    b.display();
    return 0;
}