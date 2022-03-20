#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &v,int size){
int s=0;
int e=size-1;
while(s<=e){
    swap(v.at(s),v.at(e));
    s++;
    e--;
}
}
int main(){
    vector<int> v;
    int size;
    cout<<"Please enter the size of vector: ";
    cin>>size;
    int key;
    cout<<"Enter the elements of the vector:"<<endl;
    for(int i=0;i<size;i++){
    cin>>key;
    v.push_back(key);
    }
    reverse(v,size);
    cout<<"Reversed array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<v.at(i)<<" ";
    }

    return 0;
}