/* 
A
B C
D E F
G H I J
*/
#include<iostream>
using namespace std;

int main(){
char ch='A';
int row=1;
while(row<=4){
    int col=1;
    while(col<=row){
        cout<<ch<<" ";
        ch=ch+1;
        col++;
    }
    cout<<endl;
    row++;
}
return 0;
}