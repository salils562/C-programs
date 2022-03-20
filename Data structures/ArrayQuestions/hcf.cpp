#include<iostream>
using namespace std;
int hcf(int a,int b){
while(a!=b){
    if(a>b){
        a=a-b;
    }
    else{
        b=b-a;
    }
}
return a;
}
int main(){
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    int ans;
    ans=hcf(a,b);
    cout<<"The hcf of two numbers is "<<ans<<endl;
    return 0;
}