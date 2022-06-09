#include<iostream>
using namespace std;
string converter(string words){
int i=0;
char ch='A';
char ans;    
while(words[i]!='\0'){
    if(i==0){
    if(!(words[i]>=65 && words[i]<=91)){
    ans=words[i]-'a'+ch;
    words[i]=ans;
    }
    }
    else if(words[i]==' '){
    if(!(words[i+1]>=65 && words[i+1]<=91)){    
    ans=words[i+1]-'a'+ch;
    words[i+1]=ans;
    }
    }
    i++;
}
return words;    
}
int main(){
string words="I love programming they are playing cricket good to see you";
string ans=converter(words);
cout<<ans<<endl;
return 0;
}