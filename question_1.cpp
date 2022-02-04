//if a five digit number is input through the keyboard, write a program to calculate the sum of its digits.
#include<iostream>
using namespace std;
int main()
{
int num;
int a,b,c,d,e;
cout<<"Enter a five digit number:";
cin>>num;// num=12345
a=num%10; // a= 5
num=num/10; //num=1234
b=num%10;  //b=4
num=num/10; //num=123
c=num%10;
num=num/10; //num=12
d=num%10;
num=num/10; //num=1
e=num;
cout<<"The sum of five digits of number is = "<<(a+b+c+d+e);
return 0;

}