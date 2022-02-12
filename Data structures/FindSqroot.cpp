#include<iostream>
using namespace std;

int sqroot(int);
int main(){
int num;
cout<<"Enter number to find its sq root"<<endl;
cin>>num;
cout<<"The square root of number is: "<<sqroot(num);
return 0;
}
int sqroot(int num){
int s=0;
int e=num;
int ans;
int mid= s+(e-s)/2;
while(s<=e){
if((mid*mid)==num){
return mid;
}
else if((mid*mid)>num){
    e=mid-1;
}
else if((mid*mid)<num){
    s=mid+1;
    ans=mid;
}
mid=s+(e-s)/2;
}
return ans;
}