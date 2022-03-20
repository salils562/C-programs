#include<iostream>
#include<vector>
using namespace std;
vector<int> searchInArray(int arr[3][3],int sizeRow,int sizeCol,int key){
int i=0;
vector<int> v;
while(i<sizeRow){
int s=0;
int e=2;
int mid=s+(e-s)/2;
while(s<=e){
if(arr[i][mid]==key){
  v.push_back(i);
  v.push_back(mid);
  return v;
}   
else if(arr[i][mid]<key){
    s=mid+1;
}
else{
    e=mid-1;
}
mid=s+(e-s)/2;
}
i++;
}
v.at(0)=-1;
return v;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sizeRow=sizeof(arr)/sizeof(arr[0]);
    int sizeCol=sizeof(arr[0])/sizeof(int);
    vector<int> find;
    int key;
    cout<<"Enter key to search in array ";
    cin>>key;
    find=searchInArray(arr,sizeRow,sizeCol,key);
    cout<<"The value "<<key<<" is present in "<<find.at(0)<<","<<find.at(1)<<endl;
    return 0;
}