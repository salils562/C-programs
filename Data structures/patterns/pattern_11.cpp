/* 
1111
 222
  33
   4
*/
#include<iostream>
using namespace std;

int main(){
int i=1;
int n;
cout<<"Enter n: ";
cin>>n;
while(i<=n){
    int z=1;
    while(z<i){
        cout<<" ";
        z++;
    }
    int j=1;
    while(j<=(n-i)){
        cout<<i;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}