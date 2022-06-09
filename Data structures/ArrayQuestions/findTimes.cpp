#include<iostream>
using namespace std;

int main(){
string str="aabbbc";// a2b3c1
int i=0;
int count=1;
int j=0;
while(str[i]!='\0'){
j=i; 
count=1;   
while(str[j]!='\0'){   
if(str[i]==str[j+1]){
count++;
}
j++;
}
cout<<str[i]<<count<<endl;
i++;
}
return 0;
}