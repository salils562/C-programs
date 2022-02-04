#include<iostream>
using namespace std;

int main(){
int arr[]={3,2,4,5,6,7,8,9,11};
for(int i=0;i<(sizeof(arr)/sizeof(int));i+=2){
if(i<(sizeof(arr)/sizeof(int)-1))    
swap(arr[i],arr[i+1]);
}
for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
cout<<arr[i]<<" ";
return 0;
}