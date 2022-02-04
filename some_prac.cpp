#include<iostream>
#define PI 3.14
using namespace std;
class AreaCir{
protected:    
int radius;
public:
void setRadius(int r){
    radius=r;
}
void areaCirc(){
    cout<<"Area of circle is "<<(PI*radius*radius)<<endl;
}
void circum(){
    cout<<"circumference of circle is "<<(2*PI*radius)<<endl;
}
};
class AreaSquare{
protected:
int side;
public:
void setSide(int s){
    side=s;
}
void areaSq(){
    cout<<"Area of square is "<<(side*side)<<endl;
}
};
class Areas:protected AreaSquare,protected AreaCir{
public:
void areaSq(){
    int s;
    cout<<"enter side of square: ";
    cin>>s;
    setSide(s);
    AreaSquare::areaSq();
}
void areaCir(){
    int r;
    cout<<"Enter radius of circle ";
    cin>>r;
    setRadius(r);
    areaCir();
}
};
int main(){
Areas aq;
aq.areaSq();
return 0;
}