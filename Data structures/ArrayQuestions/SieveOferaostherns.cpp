#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value till prime"<<endl;
    cin>>n;
    vector<int> v(n+1,true);
    v.at(0)=v.at(1)=false;
    int i=2;
    int count=0;
    while(i<=n){
    if(v.at(i)){
    count++;
    for(int j=i*2;j<=n;j=j+i){
     v.at(j)=0;
    }
    }
    i++;
    }
    cout<<"The prime numbers between 2 to "<<n<<" is "<<count<<endl;

    return 0;
}