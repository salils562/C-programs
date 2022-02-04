#include <iostream>
#include <math.h>
using namespace std;

class area
{
private:
    float PI = 3.14;
    float radius;
    float length, breadth;
    float side;

public:
    void setData(float r)
    {
        radius = r;
    }
    void areacirc();
    void circumference();
    void areasq(float s);
    void arearec(float l, float b);
    void areacube(float s);
};
void area ::areacirc()
{
    cout << "Area of circle is: " << (PI * radius * radius) << endl;
}
void area ::circumference()
{
    cout << "circumference of circle is:" << (2 * PI * radius) << endl;
}
void area ::areasq(float s)
{
    side = s;
    cout << "Area of square is: " << (side * side) << endl;
}
void area ::arearec(float l, float b)
{
    length = l;
    breadth = b;
    cout << "Area of rectangle is: " << (length * breadth) << endl;
}
void area ::areacube(float s)
{
    side = s;
    cout << "Area of cube is: " << (pow(side, 3)) << endl;
}
int main()
{
    area ar, ar1, ar2, ar3, ar4;
    int i = 0;
    while (i != 6)
    {
        cout << "Enter 1.To find area of circle: " << endl;
        cout << "Enter 2.To find circumference of circle: " << endl;
        cout << "Enter 3.To find area of square: " << endl;
        cout << "Enter 4.To find area of rectangle: " << endl;
        cout << "Enter 5.To find area of cube: " << endl;
        cout << "Enter 6.exit " << endl;
        int num;
        cin >> num;
        switch (num)
        {
        case 1:
            float r;
            cout << "Enter radius of circle:";
            cin >> r;
            ar.setData(r);
            ar.areacirc();
            cout<<"\n\n";
            break;
        case 2:
            float r1;
            cout << "Enter radius of circle:";
            cin >> r1;
            ar1.setData(r1);
            ar1.circumference();
            cout<<"\n\n";
            break;
        case 3:
            float s;
            cout << "Enter side of square: ";
            cin >> s;
            ar2.areasq(s);
            cout<<"\n\n";
            break;
        case 4:
            float l, b;
            cout << "Enter length and breadth of rectangle: ";
            cin >> l >> b;
            ar3.arearec(l, b);
            cout<<"\n\n";
            break;
        case 5:
            float si;
            cout << "Enter side of cube: ";
            cin >> si;
            ar4.areacube(si);
            cout<<"\n\n";
            break;
        case 6:
            i = 6;
            break;
        default:
            cout << "Enter valid statement" << endl;
        }
    }
    return 0;
}
