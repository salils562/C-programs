#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
void area(int r){
cout<<"Area of circle is "<<(PI*pow(r,2))<<endl;
}
int main(){
int d;
cout<<"Enter radius of circle: ";
cin>>d;    
void (*p)(int);
p=&area;
(*p)(d);
return 0;
}