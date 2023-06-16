#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
vector<int> produre2(vector<int> v){
    vector<int> s={1};
    int i=v.size()-1;
    while(i>=0){
        if(i==0 && v[i]==9){
          v[i]=0;  
          for(int j=0;j<v.size();j++){
            s.push_back(v[j]);
          }
          return s;
        }
        if(v[i]!=9){
            v[i]+=1;
            break;
        }else if(v[i]==9){
            v[i]=0;
            i--;
            continue;
        }
        i--;
    }
    return v;
}
int main()
{
    // vector<int> arr = {9};
    // vector<int> arr2;
    // long long int n = arr[0];
    // if(arr.size()>1){
    // for (int i = 1; i < arr.size(); i++)
    // {
    //     n = n * 10;
    //     n = n + arr[i];
    // }
    // }
    // n = n + 1;  
    // while (n)
    // {
    //     arr2.push_back(n % 10);
    //     n = n / 10;
    // }
    // for(int i=0;i<(arr2.size()/2);i++){
    //     int temp=arr2[i];
    //     arr2[i]=arr2[arr2.size()-i-1];
    //     arr2[arr2.size()-i-1]=temp;
    // }
    // for(int i=0;i<arr2.size();i++){
    //     cout<<arr2[i]<<" ";
    // }
    
    // procedure 2
    vector<int> v={9,9};
    v=produre2(v);
    printVector(v);

    return 0;
}