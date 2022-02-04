// 1)An array is a collection of items of similar type stored in contiguous memoy allocation.
// Sometimes, a simple variable is not enough to hold all the data.
// 2)For example, lets say we want to store the marks of 2500 students, 
// having 2500 different variables for this task is not feasible.
#include<iostream>
using namespace std;
int main(){
int marks[4]={23,34,45,89};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// for(int i=0; i<4;i++) //using loop we can extract array
// cout<<marks[i]<<endl;
// *****pointers and arrays***
for (int i=0;i<=3;i++)
cout<<"Address of every value in arrays:"<<marks+i<<" and the value at address: "<<*(marks+i)<<endl;
return 0;
}
// pointer arithmatic basic formula:
// address new = address current + i*sizeof(dataType)