#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &v,int size,vector<int> &s,int size2,vector<int> &g){
int i=0,j=0;
while((i<size)||(j<size2)){   
if(i<size && j<size2){

if(v.at(i)<s.at(j)){
    g.push_back(v.at(i));
    i++;
}

else if(v.at(i)>s.at(j)){
    g.push_back(s.at(j));
    j++;
}

}
else if(i>=size && j<size2){
    g.push_back(s.at(j));
    j++;
}
else if(i<size && j>=size2){
    g.push_back(v.at(i));
    i++;
}
}
}


int main(){
    vector<int> v={1,3,5,10};
    vector<int> s={4,6,8};
    vector<int> g;
    merge(v,v.size(),s,s.size(),g);
    for(int i=0;i<g.size();i++){
        cout<<g.at(i)<<" ";
    }
    return 0;
}