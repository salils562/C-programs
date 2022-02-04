#include<iostream>
using namespace std;

int main(){
int arr[]={1,2,3,4,5};
int arr2[]={1,3,4,5};
int arr3[5];
int i=0,j=0,k=0;
while(i<5 && j<4){
if(arr[i]==arr2[j]){
arr3[k]=arr[i];
i++;
j++;
k++;
}
else if(arr[i]<arr2[j]){
i++;    
}
else{
j++;    
}
}
for(int z=0;z<4;z++){
    cout<<arr3[z]<<endl;
}
return 0;
}