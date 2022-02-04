/* 
1 2 3 4
  2 3 4
    3 4
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
    int s=1;
    while(s<i){
        cout<<" ";
        s++;
    }
    int j=1;
    int z=i;
    while(j<=(n-i)){
        cout<<z;
        j++;
        z++;
    }
    cout<<endl;
    i++;
}    
return 0;
}