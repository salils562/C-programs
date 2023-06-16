#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,4,3,5};
    
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
            arr[i]=arr[i]^arr[j];
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            continue;
        }else{
        cout<<arr[i]<<" ";
        }
    }
    return 0;
}