#include<iostream>
using namespace std;

int main(){
int arr[5];
cout<<"Enter elements of array: ";
for(int i=0;i<5;i++){
    cin>>arr[i];
}
int temp;
for(int i=0;i<5/2;i++){
temp=arr[i];
arr[i]=arr[4-i];
arr[4-i]=temp;
}
cout<<endl;
for(int j=0;j<5;j++){
    cout<<arr[j]<<endl;
}
return 0;
}