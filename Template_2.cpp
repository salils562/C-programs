#include<iostream>
using namespace std;
template <class T>
class vector{
public:
T *arr;
int size;
vector(int m){
    size=m;
    arr=new T[size];
}
T dotProduct(vector &v){
T d=0;
for(int i=0;i<size;i++){
    d = d + (this->arr[i]*v.arr[i]);
}
return d;
}
};
int main(){
vector <float>v1(3);
v1.arr[0]=4.9;
v1.arr[1]=3.9;
v1.arr[2]=1.9;
vector <float>v2(3);
v2.arr[0]=1.9;
v2.arr[1]=0.9;
v2.arr[2]=1.9;
float dot=v1.dotProduct(v2);
cout<<"Vector product of two vectors is "<<dot<<endl;
return 0;
}