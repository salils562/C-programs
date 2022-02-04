/* Find average of 5students using function and call function 
with function pointer */
#include<iostream>
#include<list>
using namespace std;
void sum(list<int> &l){
 list<int> :: iterator itr;
 itr=l.begin();
 int sum=0;
 for(int i=0;i<l.size();i++)
 {
 sum=sum+(*itr);   
 itr++;
 }
 cout<<"Sum of elements of list are "<<sum<<endl;
}
int main(){
list<int> list1;
int size,element;
cout<<"Enter the number you want to add: ";
cin>>size;
cout<<"Enter "<<size<<" numbers"<<endl;
for(int i=0;i<size;i++){
cin>>element;
list1.push_back(element);
}
sum(list1);
return 0;

}