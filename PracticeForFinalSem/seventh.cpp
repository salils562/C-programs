#include<iostream>
using namespace std;

void BinarySearch(int arr[],int size,int key){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==key){
    cout<<"The element is present in "<<mid<<" index"<<endl;
    exit(0);
}
else if(arr[mid]<key){
s=mid+1;
}
else{
e=mid-1;
}
mid=s+(e-s)/2;
}
cout<<"Element not found"<<endl;
}
int main(){
    int arr[]={1,2,4,5,6,7,11,13,20};
    int size=(sizeof(arr)/sizeof(int));
    int key;
    cout<<"Enter the number you want to search in an array: ";
    cin>>key;
    BinarySearch(arr,size,key);
    return 0;
}