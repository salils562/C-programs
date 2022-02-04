#include<iostream>
using namespace std;
// Using XOR property (1^1=0)
int main(){
int arr[]={1,3,4,4,3,1,2};
int uni=0;
for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
uni=uni^arr[i]; 
}
cout<<"The unique element in array is: "<<uni<<endl;
return 0;
}
