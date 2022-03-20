#include<iostream>
using namespace std;
void rowSum(int arr[2][3],int row,int col){
int sum;    
for(int i=0;i<row;i++){
    sum=0;
    for(int j=0;j<col;j++){
    sum+=arr[i][j];
    }
    cout<<"The sum of row "<<i+1<<" is "<<sum<<endl;
}

}
int main(){
    int arr[3][3]={{1,2,3},{4,3,2},{6,4,2}};
    rowSum(arr,3,3);
    return 0;
}