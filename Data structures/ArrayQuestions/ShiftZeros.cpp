#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={2,4,0,0,3,0,5,0,6,7};
    int i=0;
    int zero=0;
    while(i<v.size()){
        if(v.at(i)!=0){
          swap(v.at(i),v.at(zero));
          zero++;
        }
        
    i++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }



    return 0;
}