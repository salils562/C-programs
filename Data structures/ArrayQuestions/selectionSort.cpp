#include<iostream>
using namespace std;
int main(){
    int arr[]={22,3,44,55,-1,33,21,1,0};
    int max;
    int z=0,end=9;
    for(int j=0;j<end;j++){
    max=INT_MAX;
    for(int i=z;i<(end);i++){
        if(arr[i]<max){
         max=arr[i];   
         swap(arr[j],arr[i]);
        }
    }
    z++;
    }
    for(int i=0;i<end;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}