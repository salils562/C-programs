// Find ith bit

#include<iostream>
using namespace std;

int main(){
int a=1011001;
int s=1;
int j=1;
while(j<=4){
s=s<<1;
j++;
}
int result=(a&s);
int n=0,rem,i=0;
int arr[10];
cout<<result<<endl;
while(result!=0){
    rem=result%2;
    result=result/2;
    arr[i]=rem;
    i++;
    n++;
}
int temp;
for(int z=0;z<n/2;z++){
temp=arr[z];
arr[z]=arr[n-z-1];
arr[n-z-1]=temp;
}
for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}
return 0;
}