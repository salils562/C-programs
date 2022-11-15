#include<iostream>
using namespace std;

class Employee{
string namee;
int code;

public:
Employee(string n,int c){
    this->namee=n;
    this->code=c;
}
// creating a copy constructor
Employee(Employee& e){
this->namee=e.namee;
this->code=e.code;
}
void printDetails();
};
void Employee::printDetails(){
    cout<<"The name of the employee is "<<namee<<endl;
    cout<<"The code of the employee is "<<code<<endl;
}
int main(){
    Employee e("salil",4);
    e.printDetails();
    Employee vipul(e);
    vipul.printDetails();

    return 0;
}