#include<iostream>
using namespace std;
void reverseStirng(string &ch,int size){
int i=0;
int j=size-1;
while(i<=j){
    swap(ch[i],ch[j]);
    i++;
    j--;
}
}
int main(){
    string ch;
    cout<<"Enter the string ";
    cin>>ch;
    int size;
    size=ch.length();
    reverseStirng(ch,size);
    cout<<"The reversed string is "<<ch<<endl;
    return 0;
}