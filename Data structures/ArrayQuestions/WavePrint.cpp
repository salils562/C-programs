#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v;    
int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
    cout<<arr[i][j]<<" ";
}
cout<<endl;
}

for(int i=0;i<4;i++){
    if(i%2==0){
   for(int j=0;j<3;j++){
       v.push_back(arr[j][i]);
   } 
}
if(i%2!=0){
    for(int j=2;j>=0;j--){
        v.push_back(arr[j][i]);
    }
}
}
for(int z=0;z<12;z++){
    cout<<v.at(z)<<" ";
}
return 0;
}