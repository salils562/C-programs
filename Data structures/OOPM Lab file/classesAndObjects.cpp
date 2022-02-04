#include<iostream>
using namespace std;
class Employee{
private:
string name;
int data;
float salary;
public:
Employee(string name,int data,float salary){
this->name=name;
this->data=data;
this->salary=salary;    
}
void showData(void);
};
void Employee::showData(void){
cout<<"The name of the employee is: "<<name<<endl;
cout<<"The data is: "<<data<<endl;
cout<<"The salary is Rs "<<salary<<endl;
}
int main(){
Employee salil("salil",4,550.55);
Employee anuj("anuj",5,446.4);
salil.showData();
anuj.showData();
return 0;
}