#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number ";
    cin>>x;
    vector<int> v;
    int num;
    int num2,num3=0;
    int temp;
    temp=x;
    while(temp!=0){
        
        num=temp%10;
        v.push_back(num);
        temp=temp/10;
    }
    int i=0;
    int size=v.size()-1;
    int decide=pow(10,size);
    vector<int> v2;
    while(i<v.size()){
        num2=v.at(i)*decide;
        v2.push_back(num2);
        decide=decide/10;
        i++;
    }
    for(int z=0;z<v2.size();z++){
        num3=v2.at(z)+num3;
    }
    if(x<0){
        cout<<"not a palidrome"<<endl;
        exit(0);
    }
    if(x==num3){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"not a palidrome"<<endl;
    }
    
    return 0;
}