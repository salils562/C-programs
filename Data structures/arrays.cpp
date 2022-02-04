#include<iostream>
using namespace std;

int main(){
int num,rem,binary;
int arr[10];
cout<<"Enter decimal number: ";
cin>>num;
int i=0,n=0;
while(num!=0){
rem=num%2;
num=num/2;
arr[i]=rem;
i++;
n++;
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}