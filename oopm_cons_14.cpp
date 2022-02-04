#include <iostream> //dynamically creating objects
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interest;
    float returnvalue;

public:
    BankDeposit() {} // ->> non-parameterised constructor(we made this so that our object gets created)
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int R);
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interest = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
        returnvalue = returnvalue * (1 + r);
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interest = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
        returnvalue = returnvalue * (1 + interest);
}
void BankDeposit :: show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << " Return value after " << years
         << " years is " << returnvalue << endl;
}
int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "Enter value of p,y and r:";
    cin >> p >> y >> r;
    b1 = BankDeposit(p, y, r);
    b1.show();
    cout << "Enter value of p,y and R:";
    cin >> p >> y >> R;
    b2 = BankDeposit(p, y, r);
    b2.show();
    return 0;
}