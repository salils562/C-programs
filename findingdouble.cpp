#include<iostream>
using namespace std;

int main(){
int arr[8]={1,2,2,1,4,5,5,4};
int ans=0;
// My total rough method
/* int s=1;
for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
        if (arr[i]==arr[j]){
            s+=1;
        }
    }
    if(s<3){
        cout<<"The single element is "<<arr[i]<<endl;
    }
    s=1;
} */
// Using data structures and algorithms --> i will use XOR GATE
for (int i=0;i<8;i++){
    ans=ans^arr[i];
}
cout<<ans<<endl;
return 0;
}