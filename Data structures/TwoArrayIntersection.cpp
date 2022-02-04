#include<iostream>
using namespace std;

int main(){
int arr[]={3,2,4,5,7,8,6,10,11,12};
int arr1[]={6,4,2,12,3,10};
int n=0;
int inter[20];
int s=0;
for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
for(int j=0;j<(sizeof(arr1)/sizeof(int));j++){
    if(arr[i]==arr1[j]){
        inter[s]=arr[i];
        n++;
        s++;
    }
}
}
for(int i=0;i<n;i++)
cout<<inter[i]<<" ";
return 0;
}