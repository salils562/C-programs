#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int> &v,int size){
int s=0;
int e=size-1;
while(s<=e){
swap(v.at(s),v.at(e));
s++;
e--;
}

}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int size=v.size();
    Reverse(v,size);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
        
    }
    return 0;
}