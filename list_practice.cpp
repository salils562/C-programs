#include <iostream>
#include <list>
using namespace std;
void display(list<string> &l){
    list<string> :: iterator itr;
    itr=l.begin();
    for(int i=0;i<l.size();i++)
    {
    cout<<"name of "<<(i+1)<<" is "<<*itr<<endl;
    itr++;
    }
}
int main()
{
    int size;
    string name;
    list<string> list1;
    cout << "Enter the number of names you want to input ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            cout << "Enter name of " << (i + 1) << "st student ";
            cin>>name;
            list1.push_back(name);
        }
        else if (i == 1)
        {
            cout << "Enter the name of " << (i + 1) << "nd student ";
            cin >> name;
            list1.push_back(name);
        }
        else if (i == 2)
        {
            cout << "Enter the name of " << (i + 1) << "rd student ";
            cin >> name;
            list1.push_back(name);
        }
        else
        {
            cout << "Enter the name of " << (i + 1) << "th student ";
            cin >> name;
            list1.push_back(name);
        }
    }
    display(list1);
return 0;
}