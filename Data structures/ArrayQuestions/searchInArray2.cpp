#include<iostream>
#include<vector>
using namespace std;
vector<int> binaryIn2D(int arr[3][3],int sizeRow,int size,int sizeCol,int key){
vector<int> ar;    
int s=0;
int e=size-1;
int mid;
mid=s+(e-s)/2;
while(s<=e){
if(arr[mid/sizeRow][mid%sizeCol]==key){
    ar.push_back(mid/sizeRow);
    ar.push_back(mid%sizeCol);
    return ar;
    
} 
else if(arr[mid/sizeRow][mid%sizeCol]<key){
    s=mid+1;
}   
else{
    e=mid-1;
}
mid=s+(e-s)/2;
}
return ar;
}
int main(){
vector<int> ans;    
int arr[3][3]={{2,3,4},{5,6,7},{8,9,10}};
int size=sizeof(arr)/sizeof(int);
int key;
cout<<"Enter the element to search"<<endl;
cin>>key;
int sizeCol=sizeof(arr[0])/sizeof(int);
int sizeRow=3;
ans=binaryIn2D(arr,sizeRow,size,sizeCol,key);
cout<<"Element is present in "<<ans.at(0)<<" "<<ans.at(1)<<endl;
return 0;
}