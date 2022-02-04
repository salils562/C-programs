#include<iostream>
using namespace std;

class table{
    private:
    int num;
    public:
    void setData(int);
    void getTable();
};
void table :: setData(int a){
    num=a;
}
void table :: getTable(){
int f=num;
for(int i=1;i<=10;i++)
{
f=num*i;
cout<<num<<" x "<<i<<" = "<<f<<endl;
}
}
int main(){
table t1;
int n;
cout<<"Enter number to print its table: ";
cin>>n;
t1.setData(n);
t1.getTable();
return 0;
}