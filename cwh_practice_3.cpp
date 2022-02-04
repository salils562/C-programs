#include <iostream>
using namespace std;
class Industry
{
    int id;
    int price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void showData()
    {
        cout << "Item id is " << id << endl;
        cout << "Item price is " << price << endl;
    }
};
int main()
{
    int size,p,q;
    cout << "Enter the number of items you want to add ";
    cin >> size;
    Industry *arr = new Industry[size];
    for(int i=0;i<size;i++)
    {
     cout<<"Enter id of "<<(i+1)<<" item "<<endl;
     cin>>p>>q;
     (arr+i)->setData(p,q);
    }
    for(int i=0;i<size;i++)
    (arr+i)->showData();
    return 0;
}