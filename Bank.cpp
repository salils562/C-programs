#include <iostream>
using namespace std;
class Bank
{
protected:
    string name;
    int account;
    float sal;

public:
    void setAccouts(int);
    void displayAccounts();
    void displaylessbal();
    int finder();
    void Debit()
    {
        float howm;
        cout << "Enter the money you want to debit:";
        cin >> howm;
        sal = sal - howm;
        cout << "Dear " << name << " amount debited is " << howm << endl;
        cout << "amount left in your account is " << sal << endl;
    }
    void Credit()
    {
        float howm;
        cout << "Enter the money you want to credit:";
        cin >> howm;
        sal = sal + howm;
        cout << "Dear " << name << " amount credit is " << howm << endl;
        cout << "amount left in your account is " << sal << endl;
    }
};
void Bank::setAccouts(int i)
{
    cout << "Enter the details of " << (i + 1) << " holder " << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> account;
    cout << "Enter salary: ";
    cin >> sal;
}
void Bank::displayAccounts()
{
    cout << "name:" << name << "   accout no:" << account << "   Balance:" << sal << endl;
}
void Bank::displaylessbal()
{
    if (sal < 100)
    {
        cout << "name:" << name << "  accout no:" << account << "   balance" << sal << endl;
    }
}
int Bank::finder()
{
    return account;
}
void Updated(Bank *ptr, int n)
{
    for (int i = 0; i < n; i++)
        (ptr + i)->displayAccounts();
}
int main()
{
    int numbers, n;
    int acc;
    cout << "Enter the number of accounts you want to add:" << endl;
    cin >> numbers;
    Bank *arr = new Bank[numbers];
    for (int i = 0; i < numbers; i++)
    {
        arr[i].setAccouts(i);
    }
    cout << "\n";
    cout << "Added accout details are:" << endl;
    cout << "\n";
    for (int i = 0; i < numbers; i++)
        arr[i].displayAccounts();
    cout<<"Peoples having money less than Rs.100 in their accounts"<<endl;    
    for (int i = 0; i < numbers; i++)
        arr[i].displaylessbal();
    cout << "Enter 1 for debit and 2 for credit:" << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "Enter accout number ";
        cin >> acc;
        for (int i = 0; i < numbers; i++)
        {
            if (acc == arr[i].finder())
            {
                cout << "Account found" << endl;
                arr[i].Debit();
                Updated(arr, numbers);
            }
        }
    }
    else if (n == 2)
    {
        cout << "Enter the account number:";
        cin >> acc;
        for (int i = 0; i < numbers; i++)
        {
            if (acc == arr[i].finder())
            {
                cout << "Account found" << endl;
                arr[i].Credit();
                Updated(arr, numbers);
            }
        }
    }
    else
        cout << "Enter the valid statement" << endl;
    return 0;
}