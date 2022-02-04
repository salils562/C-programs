// functions-->> apne program ko tukdo me tood do
#include<iostream>
using namespace std;
int sum(int a,int b)
{
return a+b;
}
void i(){
    cout<<"hey";
}
//fuction prototyping
// int prod(int a,int b); It is also expectable in fuction prototyping
int prod(int,int);
int main(){
int x,y;
cout<<"enter x:";
cin>>x;
cout<<"enter y:";
cin>>y;
// here x and y are actual parameters
int s=sum(x,y);
cout<<"The sum of values is: "<<s<<endl;
cout<<"The product of values is: "<<prod(x,y)<<endl;
i();
return 0;
}
int prod(int x,int y)
{
    return x*y;
}