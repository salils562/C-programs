#include<iostream>
using namespace std;

int main(){
string s="ssaaaal";
char c;
int count=0;
for(int i=0;i<s.size();i++){
    count=0;
    for(int j=i;j<s.size();j++){
      if(s[i]==s[j]){
        count++;
      }
    }
    if(count>=2 && c!=s[i]){
    cout<<s[i]<<endl;    
    cout<<count<<endl;
    }
    c=s[i];
}
return 0;
}