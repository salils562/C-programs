#include<iostream>
using namespace std;
int main(){
    char ch;
    string s="my name is Salil";
    int i=0;
    while(s[i]!='\0'){
    if(s[i] == ' '){
        i++;
        continue;
    }    
    else if(s[i]>='A' && s[i]<='Z'){
        i++;
        continue;
    }
    else{
       ch=s[i]-'a'+'A'; 
       s[i]=ch;
    }
    i++;
    }
    cout<<s<<endl;
    return 0;
}