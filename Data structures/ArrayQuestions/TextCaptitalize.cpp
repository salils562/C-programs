#include<iostream>
using namespace std;

int main(){
string myName="my name is salil sharma and i am a good boy";
char se;
int i=0;
while(i<myName.length()){
    if(i==0){
        se=myName[0]-'a'+'A';
        myName[0]=se;
    }
    else if(myName[i]==' '){
        se=myName[i+1]-'a'+'A';
        myName[i+1]=se;
    }
    i++;
}
cout<<"Your String is capitalized succesfully"<<endl;
cout<<myName<<endl;
return 0;
}