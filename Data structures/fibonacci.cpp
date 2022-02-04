// 0 1 1 2 3 5 8 13
#include<iostream>
using namespace std;

int main(){
int n1=0;
int n2=1,s;
int n,temp;
cout<<"Enter n: ";
cin>>n;
cout<<n1<<" "<<n2<<" ";
for(int i=0;i<=n;i++){
s=n1+n2;
cout<<s<<" ";
n1=n2;
n2=s;
}
return 0;
}