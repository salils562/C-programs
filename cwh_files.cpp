/* 
The useful classes for working with files in 
C++ are:
1. fstreambase
2. ifstream --> derived form fstreambase class
3. ofstream --> derived from fstreambase class

IN order to work with files in C++,
you will have to open it. Primarily, there are 2 ways to 
open a file:
1. using the constructor
2. using the member function open() of the class
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
string st="salil bhai";  
string stw;  
string stw1;  
//Opening files using constructor and writing in it.
// ofstream out("samplefile.txt");//write operation
// out<<st;
//Opening files using constructor and reading it.
ifstream in("samplefile2.txt");
// in>>stw;
getline(in,stw);
getline(in,stw1);
cout<<stw<<endl;
cout<<stw1;
return 0;
}