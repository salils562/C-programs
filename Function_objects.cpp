#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
//There are many function objects present
int main(){
/* Funtion objects:(functor) function wrapped in a class so that 
it is available like an object
*/
int arr[]={23,4,5,6,423,234};
sort(arr,arr+6);// the second argument we give as size of array
sort(arr,arr+6,greater<int>());// To get in decending order we will use function object
for(int i=0;i<6;i++)
cout<<arr[i]<<" "<<endl;
return 0;
}