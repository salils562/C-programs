/*
Create two classes:
1. SimpleCalculator - Takes input of 2 numbers using a utility
function and performs +,-,*,/ . and displays the results using another function.

2. ScientificCalculator -  Takes input of 2 numbers using a utility function
 and performs any four scientific operation of your choice.and 
 displays the results using another function.

 Create another class Hybridcalculator and inherit it using these 2 classes:
 Q1) What type of inheritance are you using?
 Q2) Which mode of inheritance are you using? 
 Q3) Create an object of HybridCalculator and display results of simple
 and scientific calculator.
*/
#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
protected:
    int a, b;

public:
    void getvalues(void);
    void displayans(void);
};
void SimpleCalculator ::getvalues()
{
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
}
void SimpleCalculator ::displayans()
{
    cout << "The sum of two numbers is " << (a + b) << endl;
    cout << "The difference of two numbers is " << (a - b) << endl;
    cout << "The product of two numbers is " << (a * b) << endl;
    cout << "The division of two numbers is " << float(a / b) << endl;
}
class ScientificCalculator
{
protected:
    int c, d;

public:
    void setData(void);
    void factorial(void);
    void displayansw(void);
};
void ScientificCalculator ::factorial()
{
    int fact, factd;
    fact = c;
    factd = d;
    for (int i = 1; i < c; i++)
        fact = fact * i;
    for (int i = 1; i < d; i++)
        factd = factd * i;
    cout << "The factorial of 1st digit is " << fact << endl;
    cout << "The factorial of 2nd digit is " << factd << endl;
}
void ScientificCalculator ::setData()
{
    cout << "Enter 1st value:";
    cin >> c;
    cout << "Enter 2nd value:";
    cin >> d;
}
void ScientificCalculator ::displayansw()
{
    cout << "The power of 1st value to the 2nd value is " << pow(c, d) << endl;
    cout << "The square root of 1st is " << sqrt(c) << endl;
    cout << "The square root of 2nd is " << sqrt(d) << endl;
    cout << "The factorial of both the digits is :" << endl;
    factorial();
}
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void doSimpleOperations()
    {
        getvalues();
        displayans();
    }
    void doScientificOperations()
    {
        setData();
        displayansw();
    }
};
int main()
{
    HybridCalculator h1;
    int choice;
    cout<<"1. for simple calculation\n2. for scientific calculation "<<endl;
    cin>>choice;
    if(choice==1)
    h1.doSimpleOperations();
    else
    h1.doScientificOperations();
    return 0;
}