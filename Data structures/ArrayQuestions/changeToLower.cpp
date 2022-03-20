#include<iostream>
using namespace std;
void changeChar(char &ch){
    char upper=ch-'A'+'a';
    ch=upper;
}
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    changeChar(ch);
    cout<<"The lower case letter is: "<<ch<<endl;
    return 0;
}