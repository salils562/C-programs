#include<iostream>
using namespace std;

void binarySearch(int,int [],int,int,int);
int main(){
int arr[]={3,20,22,23,33}; 
int size;
size=(sizeof(arr)/sizeof(int));
int start=0;
int end=size-1;
int find;
cout<<"Enter the value to find: ";
cin>>find;
binarySearch(find,arr,start,end,size);
return 0;
}
void binarySearch(int find,int arr[],int start,int end,int n){
int mid;    
for(int i=0;i<n;i++){
mid=(start+end)/2;
if(arr[mid]==find){
    break;
}
else if(arr[mid]>find){
end=mid-1;
}
else if(arr[mid]<find){
start=mid+1;    
}
}
cout<<"The index we searched is: "<<mid<<endl;
cout<<"The element present in it is: "<<arr[mid]<<endl;
}