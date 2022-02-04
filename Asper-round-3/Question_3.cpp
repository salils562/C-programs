#include<iostream>
using namespace std;

int main(){
int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
}
int find;
cout<<"Enter an integer: ";
cin>>find;
for(int j=0;j<4;j++){
    if(find==arr[j]){
        cout<<"Element is present in your array"<<endl;
        exit(0);
    }
    else{
        continue;
    }
}
cout<<"Element not found in the array"<<endl;
return 0;
}