#include<iostream>
using namespace std;
int binarySearch(int num){
    int s=1;
    int e=num;
    int mid=s+(e-s)/2;
    while(s<=e){
        if((mid*mid)==num){
        return mid;
        }
        else if((mid*mid)>num){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}
int main(){
    int num;
    cout<<"Enter num ";
    cin>>num;
    int ans;
    ans=binarySearch(num);
    if(ans==(-1)){
        cout<<"NO real root for the number "<<num<<endl;
    }
    else{
        cout<<"The root of the number is "<<ans<<endl;
    }
    return 0;
}