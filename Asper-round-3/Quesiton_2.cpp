#include<iostream>
using namespace std;
void finder(int *,int);
int main(){
int n;
cout<<"Enter the size of array:";
cin>>n;    
int *arr=new int[n];
cout<<"Enter the elements of array:"<<endl;
for(int i=0;i<n;i++){
cout<<"Enter element "<<i+1<<": ";
cin>>arr[i];
}
finder(arr,n);
return 0;
}
void finder(int *arr,int n){
int zeros=0,positive=0,even=0,odd=0,nega=0;    
for(int i=0;i<n;i++){
    if(arr[i]>0){
     positive++;
    }
    else if(arr[i]<0){
    nega++;
    }
    else if(arr[i]==0){
    zeros++;
    }
    if(arr[i]%2==0){
    if(arr[i]!=0)     
    even++;
    }
    else{
     odd++;
    }
}
cout<<"Even numbers are: "<<even<<endl;
cout<<"odd numbers are: "<<odd<<endl;
cout<<"positive numbers are: "<<positive<<endl;
cout<<"zeros numbers are: "<<zeros<<endl;
cout<<"nega numbers are: "<<nega<<endl;
}