#include<iostream> // static member functions --> they can only access other static 
using namespace std; // variables and functions of a class.

class Employee{
int id;
static int count;
public:
void setdata()
{
cin>>id;
cout<<"Employee id is "<<id<<endl;
count++;
}
static void showdata(){
    cout<<"Employee member: "<<count<<endl;
}
};
int Employee:: count;
int main(){
Employee salil,anuj,yash;
salil.setdata();
Employee :: showdata();
anuj.setdata();
Employee :: showdata();
yash.setdata();
Employee :: showdata();
return 0;
}