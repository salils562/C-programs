#include <iostream>
#include <vector>
using namespace std;
vector<int> addTwoArrays(vector<int> v, int sizev, vector<int> v2, int sizev2)
{
    vector<int> addition;
    int i = sizev - 1;
    int j = sizev2 - 1;
    int sum, carry = 0, c;
    while (i >= 0 && j >= 0)
    {
        sum = v.at(i) + v2.at(j);
        c = sum;
        sum = sum % 10 + carry;
        carry = c / 10;
        addition.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = v.at(i) + carry;
        c = sum;
        sum = sum % 10;
        carry = c / 10;
        addition.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = v2.at(j) + carry;
        c = sum;
        sum = sum % 10;
        carry = c / 10;
        cout << carry << endl;
        addition.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        addition.push_back(carry);
        carry = carry / 10;
    }

    for (int i = 1; i <= (addition.size() / 2); i++)
    {
        swap(addition.at(i - 1), addition.at(addition.size() - i));
    }
    return addition;
}
int main()
{
    vector<int> v = {9, 9, 9, 9, 9};
    vector<int> v1 = {8, 9, 9, 9, 9};
    vector<int> v2 = addTwoArrays(v, v.size(), v1, v1.size());
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2.at(i) << " ";
    }

    return 0;
}