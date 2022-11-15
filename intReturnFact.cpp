#include<iostream>
using namespace std;
int fact(int num){
 if(num==0){
    return 1;
 }
 int facto=fact(num-1);
 int ans=facto*num;
 return ans;
}
int main()
{
    int num;
    cout<<"Enter number ";
    cin>>num;
    int ans=fact(num);
    cout<<"The factorial is "<<ans<<endl;
    return 0;
} 
