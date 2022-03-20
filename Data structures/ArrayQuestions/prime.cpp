#include<iostream>
using namespace std;
bool isPrime(int n){
if(n==1 || n==0){
    return false;
}    
int i=2;
while(i<n){
if(n%i==0){
    return false;
}  
i++;  
}
return true;
}
int main(){
int n;
cout<<"Enter number ";
cin>>n;
bool ans=isPrime(n);
if(ans){
    cout<<"It is a prime number"<<endl;
}
else{
    cout<<"Not a prime number"<<endl;
}
return 0;
}