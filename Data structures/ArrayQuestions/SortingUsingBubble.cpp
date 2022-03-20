#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &,int);
int main(){
    vector<int> v={33,22,11,10,9,8};
    int size=v.size();
    cout<<size<<endl;
    bubbleSort(v,size);
    cout<<"The sorted vector is"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
 
    return 0;
}
void bubbleSort(vector<int> &v,int size){
int i=0,j;
bool swapped=false;
while(i<size){
    j=1;
    while(j<size){
    if(v.at(j-1)>v.at(j)){
        swap(v.at(j-1),v.at(j));
        swapped=true;
    }
    j++;
    }
    if(swapped==false){
        break;
    }
    i++;
}
}