// the program is for counting 2-power no. of times
#include<iostream>
using namespace std;
int power(int times){
    if(times==0){
        return 1;
    }
    int eval=power(times-1);
    int ans=2*eval;
    return ans;
}
int main(){
    int times;
    cout<<"Enter number of times "<<endl;
    cin>>times;
    int ans=power(times);
    cout<<"The ans is "<<ans<<endl;

    return 0;
}