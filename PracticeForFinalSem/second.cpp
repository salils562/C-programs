#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
void AreaOfCirl(int,float &);
int main(){
    float area;
    int r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    AreaOfCirl(r,area);
    cout<<"Area of circle is: "<<area<<endl;
    return 0;
}
void AreaOfCirl(int r,float &ar){
ar=PI*pow(r,2);
}