/* 
A
B B
C C C
*/
#include<iostream>
using namespace std;

int main(){
int i=1;
while(i<=3){
    int j=1;
    char ch='A'+i-1;
    while(j<=i){
     cout<<ch<<" ";
     j++;
    }
    cout<<endl;
    i++;
}
return 0;
}