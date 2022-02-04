#include<iostream>
using namespace std;

int main(){
int arr[]={1,2,3,4,5};
int arr2[5];
int sum=5;
int i=0,j,z=1;
while(i<5){
    j=i+1;
    while(j<5){
        if(arr[i]+arr[j]==sum){
        cout<<"pair "<<z<<" is ";    
        cout<<arr[i]<<" "<<arr[j]<<endl;
        z++;
        }
        j++;
    }
i++;
}

return 0;
}