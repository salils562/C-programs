#include<iostream> // making friend function of another method of a class in another class
using namespace std;
class complex;
class calculator{
public:
int add(int a,int b){
    return (a+b);
}
int sum(complex,complex);
int sumcomp(complex,complex);
};
class complex{
int a,b;
// Individually declaring functions as friends
// friend int calculator :: sum(complex o1,complex o2);
// friend int calculator :: sumcomp(complex o1,complex o2);
// Alter: Declaring the entire calculator class as friend
friend class calculator;
public:
void setNumber(int n1,int n2){
    a=n1;
    b=n2;
}
void printNumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
}
};
int calculator :: sum(complex o1,complex o2){
return (o1.a+o2.a);
}
int calculator :: sumcomp(complex o1,complex o2){
    return (o1.b+o2.b);
}
int main(){
complex c1,c2;
calculator c3;
c1.setNumber(2,3);
c1.printNumber();
c2.setNumber(2,3);
c2.printNumber();
int sum,comp;
sum=c3.sum(c1,c2);
comp=c3.sumcomp(c1,c2);
cout<<sum<<" + "<<comp<<"i"<<endl;
return 0;
}