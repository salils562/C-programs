#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void result(string, string);
int main()
{
    string user, comp;
    srand(time(0));
    int number = rand() % 100 + 1; //33,66,99
    if (number <= 33)
        comp = "stone";
    else if (number > 33 && number <= 66)
        comp = "paper";
    else
        comp = "scissor";
    cout << "Please enter your choice: " << endl;
    cin >> user;
    result(user,comp);
    return 0;
}
void result(string user, string computer)
{
    if (user == computer)
    {
        cout << "Computer choose " << computer << endl;
        cout << "Draw";
    }
    else if (user == "stone" && computer == "paper")
    {
        cout << "Computer choose " << computer << endl;
        cout << "You loose" << endl;
    }
    else if (user == "scissor" && computer == "stone")
    {
        cout << "Computer choose " << computer << endl;
        cout << "You loose";
    }
    else if (user == "paper" && computer == "scissor")
    {
        cout << "Computer choose " << computer << endl;
        cout << "You loose";
    }
    else
    {
        cout << "Computer choose " << computer << endl;
        cout << "You win!";
    }
}