/* 
A B C
A B C
A B C 
*/
#include<iostream>
using namespace std;

int main(){
int i=1;
char ch='A';
while(i<=3){
    int j=1;
    while(j<=3){
     cout<<ch;
     ch=ch+1; 
     j++;
    }
    cout<<endl;
    i++;
}
return 0;
}