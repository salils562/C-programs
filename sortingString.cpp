#include<iostream>
using namespace std;
void swap(string &s,string &s2){
string temp=s;
s=s2;
s2=temp;
}
void sortString(string names[],int size){
int i=0;
while(i<size){
    int j=0;
    while(j<size-1){
    if(names[j][0]>names[j+1][0]){
      swap(names[j],names[j+1]);
    }
      j++;
    }
    i++;
}
}
void printString(string [],int);
int main(){
    string names[]={"shini","vipul","salil","anuj"};
    int size=sizeof(names)/sizeof(string);
    sortString(names,size);
    printString(names,size);
    return 0;
}
void printString(string names[],int size){
for(int i=0;i<size;i++){
    cout<<names[i]<<endl;
}
}