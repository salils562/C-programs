#include<iostream>
#define PI 3.14
using namespace std;
void AreaOfCircle(float r,float *ar){
*ar=PI*(r*r);
}
int main(){
float r;
float area;
cout<<"Enter the radius of circle: ";
cin>>r;
AreaOfCircle(r,&area);
cout<<"The area of circle is: "<<area<<endl;
return 0;
}