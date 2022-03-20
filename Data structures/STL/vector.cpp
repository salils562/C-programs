#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &v, int size){
for(int i=0;i<size;i++){
for(int j=0;j<size-1;j++){
    if(v.at(j)>v.at(j+1)){
        swap(v.at(j),v.at(j+1));
    }
}

}

}
int main(){
    vector<int> v;
    cout<<"Enter elements of vector"<<endl;
    int s;
    for(int i=0;i<5;i++){
        cin>>s;
        v.push_back(s);
    }
    int size=v.size();
    BubbleSort(v,size);
    cout<<"Sorted elements of vector are: "<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v.at(j)<<" ";
    }
    return 0;
}