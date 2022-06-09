#include<iostream>
using namespace std;
int main(){
    string s="Hello    salil    bhai";
    char news[20];
    int i=0;
    int j=0;
    while(i<s.length()){
        if(s[i]==' ' && s[i+1]==' '){
          i++;
          continue;
        }
        else{
           news[j]=s[i];
           j++;
        }
        
        i++;
    }
    int z=0;
    while(z<=j){
        cout<<news[z];
        z++;
    }
    return 0;
}