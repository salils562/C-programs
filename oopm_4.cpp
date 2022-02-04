#include <iostream>
using namespace std;
class shop
{
    int Itemid[40];
    int Itemprice[40];
    int counter;

public:
    void init()
    {
        counter=0;
    }
    void setdata();
    void display();
};
void shop ::setdata()
{
    cout << "Enter Id of " << counter + 1 << " Item: ";
    cin >> Itemid[counter];
    cout << "Enter price of " << counter + 1 << " Item: ";
    cin >> Itemprice[counter];
    counter++;
}
void shop ::display()
{
    for (int i = 0; i < counter; i++)
        cout << "Item Id is " << Itemid[i] << " and price " << Itemprice[i] << endl;
}

int main()
{
    shop dukaan;
    int n;
    cout<<"Enter items you want to add ";
    cin>>n;
    dukaan.init();
    for (int i=1;i<=n;i++)
    dukaan.setdata();
    dukaan.display();
    return 0;
}
