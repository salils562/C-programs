#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter size of array: ";
cin>>size;
int *arr=new int[size];
for(int i=0;i<size;i++){
    cout<<"Enter "<<(i+1)<<" element: ";
    cin>>arr[i];
}
cout<<"Elements of array are: "<<endl;
for(int i=0;i<size;i++)
cout<<arr[i]<<endl;
return 0;
}