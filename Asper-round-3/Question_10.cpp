#include<iostream>
using namespace std;

int main(){
int arr[10]={2,3,5,3,2,3,5,4,5,2};
for(int i=0;i<10;i++){
    if(i%2==0){
        cout<<arr[i]<<"\t";
    }
}
return 0;
}