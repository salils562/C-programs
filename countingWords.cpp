#include<iostream>
using namespace std;
int main(){
int arr[]={2,2,3,3,1,4,1}; 
int size=sizeof(arr)/sizeof(int);
int count=0;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
    if(arr[i]==arr[j]){
        count++;
    }
    if(count==1){
        cout<<arr[i]<<" ";
        count=0;
    }
}
       
}
return 0;
}