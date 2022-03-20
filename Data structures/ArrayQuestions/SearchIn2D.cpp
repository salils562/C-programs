#include<iostream>
using namespace std;
void binarySearch(int [4][4],int,int);
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int key;
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter number to search: ";
    cin>>key;
    binarySearch(arr,key,size);
    return 0;
}
void binarySearch(int arr[4][4],int key,int size){
int s=0;
int e=size-1;
int mid;
mid=s+(e-s)/2;
while(s<=e){
if(arr[mid/4][mid%4]==key){
    cout<<"Element "<<arr[mid/4][mid%4]<<" is present in "<<(mid/4)<<","<<(mid%4)<<endl;
    exit(1);
}
else if(arr[mid/4][mid%4]<key){
    s=mid+1;
}
else{
    e=mid-1;
}
mid=s+(e-s)/2;
}
cout<<"Element not found"<<endl;

}