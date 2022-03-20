#include<iostream>
#include<cmath>
using namespace std;
int findSquareRoot(int num){
int s=0;
int e=num;
int mid=s+(e-s)/2;
while(s<=e){
if(pow(mid,2)==num){
    return mid;
}
else if(pow(mid,2)>num){
    e=mid-1;
}
else{
    s=mid+1;
}
mid=s+(e-s)/2;
}
return -1;
}
int main(){
    int sq;
    cout<<"Enter the number to find square root: ";
    cin>>sq;
    int ans;
    ans=findSquareRoot(sq);
    cout<<"The square root of "<<sq<<" is "<<ans<<endl;
    return 0;
}