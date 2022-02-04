#include<iostream>
using namespace std;
class Employee{
private:
string name;
int data;
public:
Employee(string name,int data){
    this->name=name;
    this->data=data;
}
void showData(void);
};
void Employee::showData(void){
    cout<<"The name of the employee is: "<<name<<endl;
    cout<<"The data of the employee is: "<<data<<endl;
}
int main(){
string name;
int d;    
cout<<"Enter the name of the employee: ";
cin>>name;
cout<<"Enter important data: ";
cin>>d;
Employee salil(name,d);
salil.showData();
return 0;
}