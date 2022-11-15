#include<iostream>
using namespace std;
void Table(int count,int num){
cout<<num<<" x "<<count<<" = "<<(num*count)<<endl;
count++;
if(count<=10){    
Table(count,num);
}
}
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    Table(1,num);
    return 0;
}