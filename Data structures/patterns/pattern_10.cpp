/*
#####*
####**
###***
##****
#*****
****** 
*/

#include<iostream>
using namespace std;

int main(){
int i=0;
int n;
cout<<"Enter n:";
cin>>n;
while(i<=n){
    int j=0;
    int z=0;
    while(j<=(n-i)){
     cout<<" ";
     j++;   
    }
    while(z<=i){
        cout<<"*";
        z++;
    }
    cout<<endl;
    i++;
}
return 0;
}