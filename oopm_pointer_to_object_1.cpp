#include<iostream>
using namespace std;

class Shop{
 int id;
 float price;
 public:
 void setData(int a,float b){
     id=a;
     price=b;
 }
 void getData(){
     cout<<"The id is "<<id<<endl;
     cout<<"price of item is "<<price<<endl;
 }
};
int main(){
    int size=2;
    int p;
    float q;
    Shop *arr=new Shop[size];
    Shop *arrtemp;
    arrtemp=arr;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter id and price of item "<<(i+1)<<endl;
        cin>>p>>q;
        (arr)->setData(p,q);
        arr++;
    }
    for(int i=0;i<size;i++)
    {
        (arrtemp)->getData();
        arrtemp++;
    }

return 0;
}