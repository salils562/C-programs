#include<iostream>
using namespace std;
int LargestRow(int [3][3]);
int main(){
    int arr[3][3]={{2,3,4},{5,32,2},{55,2,5}};
    int largest=LargestRow(arr);
    cout<<"The largest row is "<<largest<<endl;
    return 0;
}
int LargestRow(int arr[3][3]){
int large=INT_MIN;    
int sum,index;
for(int i=0;i<3;i++){
    sum=0;
    for(int j=0;j<3;j++){
     sum+=arr[i][j];
    }
    if(sum>large){
        large=sum;
        index=i;
    }
}
return index;
}