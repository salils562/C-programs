#include<iostream>
using namespace std;
// one of the best alogoritm for finding maximum element in the array
int main(){
int arr[]={3,43,2,3,4,-43};
int max=INT_MIN;
int min=INT_MAX;
for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    if(max<=arr[i]){
        max=arr[i];
    }
}
for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    if(min>=arr[i]){
        min=arr[i];
    }
}
cout<<"The maximum number inside the array is: "<<max<<endl;
cout<<"The minimum number inside the array is: "<<min<<endl;
return 0;
}

