/* Virtual class 
syntax to create virtual class: -
class B : virtual public A{

};
*/
#include <iostream>
#include <cstdio>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "YOUR roll no is " << roll_no << endl;
    }
};
class Test :virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here: "
             << "Maths: " << maths
             << " Physics: " << physics << endl;
    }
};
class Sports :virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};
class Result : public Sports, public Test
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    Result r1;
    r1.set_number(1);
    r1.set_marks(90.6, 90.4);
    r1.set_score(9);
    r1.display();
    return 0;
}