#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int x, y;
    friend void discal(Point, Point);

public:
    Point(int, int);
    void display()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};
Point ::Point(int a, int b)
{
    x = a;
    y = b;
}
void discal(Point a1, Point a2)
{
    float dist;
    float sum;
    sum = pow((a2.x) - (a1.x), 2) + pow((a2.y - a1.y), 2);
    dist = sqrt(sum);
    cout << "Distance between two points is " << dist << endl;
}
int main()
{
    int x1, x2, y1, y2;
    cout << "x1: ";
    cin >> x1;
    cout << "x2: ";
    cin >> x2;
    cout << "y1: ";
    cin >> y1;
    cout << "y2: ";
    cin >> y2;
    Point p(x1, x2); 
    Point q(y1, y2);
    p.display();
    q.display();
    discal(p, q);
    return 0;
}