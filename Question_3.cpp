#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int l1,l2;
cout<<"Enter value of L1 and L2:";
cin>>l1>>l2;
int g1,g2;
cout<<"Enter values of G1 and G2:";
cin>>g1>>g2;
float D,sine,cose;
sine=sin(l1)*sin(l2);
cose= (cos(l1)*cos(l2))*cos(g2-g1);
D=3963*pow(cos(sine+cose),-1);
cout<<"Distance:"<<D;
return 0;
}