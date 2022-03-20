#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,2,44,4};
    int min=INT_MIN;
    for(int i=0;i<5;i++){
    if(arr[i]>min){
    min=arr[i];
    }
    }
    cout<<"The maximum value inside the array is: "<<min<<endl;
    return 0;
}