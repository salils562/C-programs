#include<iostream>
using namespace std;
void selectionSort(int [],int);
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"Sorted array we have: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void selectionSort(int arr[],int size){
int key;   
for(int i=0;i<size;i++){
    key=i;
for(int j=i+1;j<size;j++){
if(arr[key]>arr[j]){
    swap(arr[key],arr[j]);
}
}
}
}