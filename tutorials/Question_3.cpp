#include<iostream>
using namespace std;
class Employee{
    private:
    int data=4;
    protected:
    int data3=5;
    public:
    int data2=6;
};

int main(){
Employee obj;
cout<<obj.data2<<endl;

return 0;
}