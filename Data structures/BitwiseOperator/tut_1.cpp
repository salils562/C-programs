#include<iostream>
using namespace std;
// we use different symbols to use bitwise operators
/* 
bitwise AND --> &
bitwise OR --> |
bitwise NOT --> ~
XOR --> ^ 
Left shift --> <<
Right shift --> >>
*/
int main(){
int a=4;
int b=6;
cout<<"a&b: "<<(a&b)<<endl;
cout<<"a|b: "<<(a|b)<<endl;
cout<<"~a: "<<~(a)<<endl;
cout<<"~b: "<<~(b)<<endl;
cout<<"a^b: "<<(a^b)<<endl;
return 0;
}