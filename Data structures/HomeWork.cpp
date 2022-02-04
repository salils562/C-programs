#include<iostream>
using namespace std;

int main(){
int sum=0;
int size,arr[20];
cout<<"Enter size of array: ";
cin>>size;
for(int i=0;i<size;i++){
    cin>>arr[i];
    sum=sum+arr[i];
}
cout<<"Sum of elements of array are: "<<sum<<endl;
return 0;
}