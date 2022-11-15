#include<iostream>
using namespace std;
int main(){
    string s="ssaalil";
    int count=0;
    char ch;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(ch==s[i]){
                continue;
            }
            else if(s[i]==s[j]){
                cout<<s[i]<<endl;
                ch=s[i];
            }
        }
    }
    return 0;
}
