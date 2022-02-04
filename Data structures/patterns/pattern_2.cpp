#include<iostream>
using namespace std;

int main(){
int i=1,j=1;
while(i<=3){
    j=1;
    while(j<=3){   
     char c='A'+i-1;   
     cout<<c;
     j++;
    }
    cout<<endl;
    i++;
    
}
return 0;
}