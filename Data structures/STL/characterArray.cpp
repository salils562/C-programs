#include<iostream>
using namespace std;
int main(){
    char ch[5];
    int i=0;
    cout<<"Enter your name ";
    cin>>ch;
    cout<<"your name is ";
    while(ch[i]!='\0'){
        cout<<ch[i];
        i++;
    }

    return 0;
}