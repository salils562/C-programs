#include<iostream>
using namespace std;
bool Search(int arr[],int find,int size){
for(int i=0;i<size;i++){
    if(arr[i]==find){
        return true;
    }
}
return false;
}
int main(){
int arr[10]={4,3,5,-1,-3,3,5,2,1};
int num;
cout<<"Enter number you want to search: ";
cin>>num;
if(Search(arr,num,10)){
    cout<<"Element is present"<<endl;
}
else{
    cout<<"Element is not present"<<endl;
}
return 0;
}