#include<iostream>
#define PI 3.14
using namespace std;
void areaOfCircle(int r){
cout<<"Area of circle is "<<(PI*r*r)<<endl;
}
int perimeter(int l,int b){
    return 2*(l+b);
}
int main(){
    int e;
    cout<<"Enter the radius of circle ";
    cin>>e;
void (*ptr)(int);
ptr=&areaOfCircle;
(*ptr)(e);
int (*ptr2)(int,int);
ptr2=&perimeter;
int l,b;
cout<<"Enter length and breadth of rectangle ";
cin>>l>>b;
int peri;
peri=(*ptr2)(l,b);
cout<<"Perimeter of rectangle is "<<peri<<endl;
return 0;
}