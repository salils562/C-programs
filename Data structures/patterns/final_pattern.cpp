#include<iostream>
using namespace std;

int main(){
int i=1;
while(i<=4){
    int j=1;
    while(j<=(4-i)){
        cout<<" ";
        j++;
    }
    int z=1;
    while(z<=i){
        cout<<z;
        z++;
    }
    int s=1;
    int d=(i-1);
    while(s<=i){
        if(d==0)
        {
        cout<<"";
        s++;}
        else{
        cout<<d;
        d--;
        s++;}
    }
    cout<<endl;
    i++;
}
return 0;
}