#include<iostream>
using namespace std;
void insertionSort(int [],int);
int main(){
    int arr[]={11,1,2,13,10,45,28};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    cout<<"sorted arrays are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void insertionSort(int arr[],int n){
int temp;
for(int i=1;i<n;i++){
    temp=arr[i];
    int j;
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]>temp){
         arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1]=temp;

}
}