#include<iostream>
using namespace std;

int main(){
int arr[]={1,2,3,2,1,4,4,3};
int n=0;
n=n^arr[0];
cout<<n<<endl;
n=n^arr[1];
cout<<n<<endl;
n=n^arr[2];
cout<<n<<endl;
n=n^arr[3];
cout<<n<<endl;
n=n^arr[4];
cout<<n<<endl;
n=n^arr[5];
cout<<n<<endl;
n=n^arr[6];
n=n^arr[7];
cout<<"Final value of n is: "<<n<<endl;
return 0;
}