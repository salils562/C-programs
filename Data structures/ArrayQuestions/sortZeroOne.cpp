#include<iostream>
using namespace std;

int main(){
int arr[]={0,1,1,0,0,1};
int size=sizeof(arr)/sizeof(int);
int left=0;
int right=size-1;
while(left<right){
while(arr[left]==0 && left<right){
left++;
}
while(arr[right]==1 && left<right){
right--;    
}
if(left<right){
swap(arr[left],arr[right]);
left++;
right--;
}

}
for(int z=0;z<size;z++)
cout<<arr[z]<<" ";
return 0;
}