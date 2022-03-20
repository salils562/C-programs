#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> &v,int size){
int count=0;    
for(int i=1;i<size;i++){
if(v.at(i-1)>v.at(i)){
    count++;
}

}
if(v.at(size-1)>v.at(0)){
count++;
}
return count<=1;
}
int main(){
    vector<int> v={3,4,5,1,2};
    int size=v.size();
    bool ans=check(v,size);
    if(ans==true){
        cout<<"Array is rotated and sorted"<<endl;
    }
    else{
        cout<<"Array is either not sorted or rotated"<<endl;
    }
    return 0;
} 