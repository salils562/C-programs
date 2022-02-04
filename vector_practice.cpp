//Create a vector add elements in it and add all the elements. show the output
#include <iostream>
#include <vector>
#define PI 3.14
using namespace std;
template <class T>
int sumVectors(vector<T> &v, int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
        sum = sum + v[i];
    return sum;
}
template <class T>
void area(T r){
    cout<<"Area of circle is "<<(PI*r*r)<<endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    float sum;
    cout << "Enter the no. of elements you want to add: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << (i + 1) << " element ";
        cin >> element;
        vec1.push_back(element);
    }
    sum = sumVectors(vec1, size);
    cout << "The sum of elements of vector is " << sum << endl;
    float r;
    cout<<"Enter radius of circle ";
    cin>>r;
    area(r);
    return 0;
}