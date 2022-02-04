#include<iostream>
using namespace std;

int main(){
int arr[]={4,3,4,3,5};
int temp;
for(int i=0;i<(sizeof(arr)/sizeof(int))/2;i++){
 temp=arr[i];
 arr[i]=arr[(sizeof(arr)/sizeof(int))-i-1];
 arr[(sizeof(arr)/sizeof(int))-i-1]=temp;
}
for(int i=0;i<5;i++)
cout<<arr[i]<<" ";
return 0;
}