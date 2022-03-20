#include<iostream>
using namespace std;
int Lenstr(string name){
int count=0,i=0;
while(name[i]!='\0'){
    count++;
    i++;
}
return count;
}
int main(){
string name;
cout<<"Enter the string ";
cin>>name;
int ans;
ans=Lenstr(name);
cout<<"The length of the string is "<<ans<<endl;
return 0;
}