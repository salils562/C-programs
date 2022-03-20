#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"after rotating 90 degree"<<endl;
    int s=0,j=2;
    while(s<3){
        j=2;
        while(j>=0){
            cout<<arr[j][s]<<" ";
            j--;
        }
        s++;
        cout<<endl;
    }
    return 0;
}