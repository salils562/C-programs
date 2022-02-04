#include<iostream>
using namespace std;

int binarySearch(int,int [],int,int,int);
int main(){
int arr[]={3,20,22,23,33}; 
int even[]={44,45};
int size;
size=(sizeof(even)/sizeof(int));
int start=0;
int end=size-1;
int find;
cout<<"Enter the value to find: ";
cin>>find;
int ans;
ans=binarySearch(find,even,start,end,size);
cout<<"The index in which element is present is: "<<ans<<endl;
return 0;
}
int binarySearch(int find,int arr[],int start,int end,int n){
int mid;   
mid=(start+end)/2;
while(start<=end){
if(arr[mid]==find){
    return mid;
}
else if(arr[mid]>find){
end=mid-1;
}
else if(arr[mid]<find){
start=mid+1;    
}
mid=(start+end)/2;
}
return -1;
}