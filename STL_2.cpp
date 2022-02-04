#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
    cout<<"elements in vector are "<<v[i]<<endl;
    // cout<<"elements in vector are "<<v.at(i)<<endl; --> it is anoter way to get elements of vector
    }
}
int main(){
//Ways to create a vector    
 vector<int> vec1;//Zero length vector
// vector<int> vec2(4); //4-element vector
// vector<char> vec3(4); // 4-element character vector
// vec3.push_back('5');
// vector<char> :: iterator iter=vec3.begin();
// vec3.insert(iter,'4'); //sets the element at starting point
// vector<char> vec4(vec3); //4-elemnt character vector from vec3
// vector<int> vec5(4,13); //A six-size vector with element 3
// display(vec1);
// display(vec2);
// display(vec3);
// display(vec4);
/*
display(vec5);
cout<<vec5.size();
*/

int element,size=3;
cout<<"Enter size of vector: ";
cin>>size;
for (int i = 0; i < size; i++)
{
    cout<<"Enter an element to this vector ";
    cin>>element;
    vec1.push_back(element);
}
//vec1.pop_back(); //Deletes the last element of vector
display(vec1);
// vector<int> :: iterator iter=vec1.begin(); //iterator syntax
// vec1.insert(iter+1,5,566); //The middle parameter is for no.of copies of element
// display(vec1);
return 0;
}