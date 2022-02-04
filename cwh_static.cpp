#include<iostream>
using namespace std;
int tabel(int);
int main(){
int num;
int ans;
cout<<"Enter number:";
cin>>num;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
ans=tabel(num);
cout<<ans<<endl;
return 0;
}
int tabel(int n)
{
static int f=0;
f=f+1;
int a;
a=f*n;
return a;
}