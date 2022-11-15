#include<iostream>
using namespace std;
int main(){
    string s="cinema";
    string s2="iceman";
    int z=0;
    if(s.size()==s2.size()){
    for(int i=0;i<s.size();i++){
     for(int j=0;j<s2.size();j++){
       if(s[i]==s2[j]){
        z++;
       }
     }
     }
    }
    if(z==s.size()){
        cout<<"Anagram"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}