//Multilevel Inheritence
#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_number(int);
    void get_number(void);
};
void student ::set_number(int r)
{
    roll = r;
}
void student ::get_number()
{
    cout << "The roll number is " << roll << endl;
}
class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam ::get_marks()
{
    cout << "Maths marks are:" << maths << endl;
    cout << "physics marks are:" << physics << endl;
}
class result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_number();
        get_marks();
        cout << "your percentage is: " << (maths + physics) / 2 << " %" << endl;
    }
};
int main()
{
    result r1;
    int rol;
    float mark, mark2;
    cout << "Enter rollno. ";
    cin >> rol;
    cout << "Enter marks in maths and physics ";
    cin >> mark >> mark2;
    r1.set_number(rol);
    r1.set_marks(mark, mark2);
    r1.display();
    return 0;
}
/* 
Notes:- 
 If we are inheriting B from A and C from B [A--->B--->C]
1. A is the base class for B and B is the base class for C.
2. A-->B-->C is called inheritance path.
*/