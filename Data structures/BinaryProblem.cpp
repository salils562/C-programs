#include<iostream>
using namespace std;
int firstOcc(int arr[],int key,int size){
int start=0;
int end=size-1;
int mid,ans;
mid=(start+end)/2;
while(start<=end){
if(arr[mid]==key){
ans=mid;
end=mid-1;
}
else if(arr[mid]>key){
end=mid-1;
}
else{
start=mid+1;
}
mid=(start+end)/2;
}
return ans;
}
int LastOcc(int arr[],int key,int size){
int start=0;
int end=size-1;
int mid,ans;
mid=(start+end)/2;
while(start<=end){
if(arr[mid]==key){
ans=mid;
start=mid+1;
}
else if(arr[mid]>key){
end=mid-1;
}
else{
start=mid+1;
}
mid=(start+end)/2;
}
return ans;
}
int main(){
int arr[]={1,2,2,2,3,3,3,4,4,4,5,5,5};
int size=(sizeof(arr)/sizeof(int));
int key;
cout<<"Enter the number to find its first and last occurence in an array: ";
cin>>key;
int a,b;
a=firstOcc(arr,key,size);
b=LastOcc(arr,key,size);
cout<<"The first occurence of "<<key<<" is: "<<a<<endl;
cout<<"The last occurence of "<<key<<" is: "<<b<<endl;
return 0;
}