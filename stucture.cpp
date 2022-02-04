#include<iostream>
using namespace std;
struct emp{
int data;
};
int main(){
struct emp e[3];
(e)->data=4;
(e+1)->data=5;
(e+2)->data=6;
for(int i=0;i<3;i++)
cout<<(e+i)->data<<endl;
return 0;
}