#include<iostream>
using namespace std;
void bubbleSort(int [],int);
int main(){
    int arr[]={12,11,23,2,4,1,0};
    int size=sizeof(arr)/sizeof(int);
    bubbleSort(arr,size);
    cout<<"Sorted the array using bubble sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void bubbleSort(int arr[],int n){
bool swapped=false;    
for(int i=0;i<n;i++){
    for(int j=0;j<(n-1);j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped=true;
    }
    }
    if(swapped==false){
     break;
    }
}

}