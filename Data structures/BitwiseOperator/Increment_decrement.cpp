/* 
i++ --> post increment
++i --> pre increment
*/
#include<iostream>
using namespace std;

int main(){
int i=7;
cout<<(++i)<<endl; // 8
cout<<(i++)<<endl; // 8
cout<<(i--)<<endl; // 9
cout<<(--i)<<endl; // 7
return 0;
}