#include<iostream>
using namespace std;
int main()
{
int ram,shayam,ajay;
int small,smallest;
cout<<"Enter ram age:";
cin>>ram;
cout<<"Enter shayam age:";
cin>>shayam;
cout<<"Enter ajay age:";
cin>>ajay;

if(ram>shayam) //ram=11, shayam=12
small=shayam;    
else
small=ram;

if(small>ajay) //small=11 ajay=13
smallest=ajay;
else
smallest=small;

cout<<"Youngest among them is:"<<smallest;
return 0;
}