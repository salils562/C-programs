// Go to cpp reference list website and see the more fuctions for list 
#include<iostream>
#include<list>
using namespace std;
// template <class T>
void display(list<int> &l){
list<int> :: iterator tr;
tr=l.begin();
for(int i=0;i<l.size();i++)
{
    cout<<*tr<<" ";
    tr++;
}
cout<<endl;
}
int main(){
list<int> list1; // List of zero length
list1.push_back(5);
list1.push_back(12);
list1.push_back(9);
list1.push_back(3);
// list1.pop_front(); //we can remove element from front 
// list1.remove(9); //it will remove 9 from the list
// list1.sort(); // -- sorting the list
display(list1);

list<int> list2(3); //Empty list of size 7
list<int> :: iterator itr;
itr = list2.begin();
for(int i=0;i<3;i++){
cout<<"enter value ";
cin>>*itr;
itr++;
}
// list2.pop_front();
list1.swap(list2); //swapping the list items into one another
display(list2);
// list1.merge(list2); //merging the list
list1.sort(); // sorting the list
// list1.reverse(); //reversing the list
// cout<<"\nelements of list are: "<<endl;
// display(list1);
return 0;
}
