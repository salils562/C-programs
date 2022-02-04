/*
6. Using switch-case statements write a program which works in the following way: 
Print this on the screen and input a number (from 1 to 4) 
1. Area of square 
2. Area of rectangle 
3. Area of circle 
4. Area of Equilateral triangle 
Enter your choice 
*/
#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
float AreaOfSq(float side){
    return (side*side);
}
float AreaOfrectangle(float l,float b){
    return (l*b);
}
float AreaOfCirc(float r){
return (PI*r*r);
}
float AreaOfEqu(float s){
    float area;
    area=(sqrt(3))/4*(s*s);
    return area;
}
int main(){
int num;
cout<<"1. Area of square\n"<<
"2. Area of rectangle\n"<< 
"3. Area of circle\n" <<
"4. Area of equilateral triangle"<<endl;
cout<<"Enter your choice"<<endl;
cin>>num;
switch(num){
case 1:
    float side;
    cout<<"Enter side of square: ";
    cin>>side;
    float ar;
    ar=AreaOfSq(side);
    cout<<"Area of square is: "<<ar<<endl;
    break;
case 2:
    float lenght,breadth;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>lenght>>breadth;
    float are;
    are=AreaOfrectangle(lenght,breadth);
    cout<<"Area of rectangle is: "<<are<<endl;
    break;
case 3:
    float rad;
    cout<<"Enter radius of circle: ";
    cin>>rad;
    float area;
    ar=AreaOfCirc(rad);
    cout<<"Area of circle is: "<<area<<endl;
    break;
case 4:
    float tri;
    cout<<"Enter side of triangle: ";
    cin>>tri;
    float areaa;
    areaa=AreaOfEqu(tri);
    cout<<"Area of equlateral triangle is: "<<areaa<<endl;
    break;
default: 
    cout<<"Please enter valid option"<<endl;
    break;
}
return 0;
}