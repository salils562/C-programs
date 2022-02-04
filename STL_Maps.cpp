#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array
int main(){
map<string,int> marksMap;
marksMap["salil"]=98;
marksMap["shikhar"]=88;
marksMap["anuj"]=99;
marksMap.insert({{"babes",678},{"sunshine",78}});
// cout<<marksMap["salil"]; -->> it works
map<string,int> :: iterator itr;
for(itr=marksMap.begin();itr!=marksMap.end();itr++)
cout<<itr->first<<" "<<itr->second<<"\n"<<endl;
cout<<"The size of marksMap is "<<marksMap.size()<<endl;
cout<<"The maximum size of marksMap is "<<marksMap.max_size()<<endl;
cout<<"The empty's value is "<<marksMap.empty()<<endl; //it returns 0 if map is not empty and 1 if not.
return 0;
}