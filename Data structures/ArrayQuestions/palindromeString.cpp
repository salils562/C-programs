#include<iostream>
using namespace std;
bool checkPalindrome(string ch,int size){
int s=0;
int e=size-1;
while(s<=e){
if(ch[s]!=ch[e]){
    return 0;
}
s++;
e--;
}
return 1;
}
int main(){
    string str;
    cout<<"Enter the string ";
    cin>>str;
    int size;
    size=str.size();
    bool check;
    check=checkPalindrome(str,size);
    if(check){
        cout<<"The stirng is palindrome"<<endl;
    }
    else{
        cout<<"The strring is not palindrome"<<endl;
    }
    return 0;
}