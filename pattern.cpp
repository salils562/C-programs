#include<iostream>
#define PI 3.14
using namespace std;
class cArea;
void Area(cArea);
class cArea{
private:
int rad;
friend void Area(cArea);
public:
void setRadi(int);
void displayArea(void);
};
void cArea::setRadi(int r){
    rad=r;
}
void Area(cArea r1){
    cout<<"Area of circle is "<<r1.rad*PI*r1.rad<<endl;
}
int main(){
cArea c1;
int radius;
cout<<"Enter the radius of circle "<<endl;
cin>>radius;
c1.setRadi(radius);
Area(c1);
return 0;
}