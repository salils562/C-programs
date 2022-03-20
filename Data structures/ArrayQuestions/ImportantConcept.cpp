#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]<key){
    s=mid+1;
}
else {
    e=mid-1;
}
mid=s+(e-s)/2;
}
return -1;
}

void SelectionSort(int [],int);
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    cout<<"The sorted array we have"<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" "<<endl;
    }
    int key;
    cout<<"Enter the element you want to search in an array: ";
    cin>>key;
    int ans;
    ans=BinarySearch(arr,n,key);
    if(ans==-1){
        cout<<"Element not found !!!"<<endl;
        exit(0);
    }
    cout<<"The "<<key<<" element is present in index "<<ans<<endl;
    return 0;
}
void SelectionSort(int arr[],int n){
int key;
for(int i=0;i<n;i++){
key=i;
for(int j=i+1;j<n;j++){
if(arr[key]>arr[j]){
    swap(arr[key],arr[j]);
}
}
}
}