#include<iostream>
#include<fstream>
using namespace std;
/* 3 useful classes:-
1. fstreambase.
2. ifstream.
3. ofstream.
Read operation --> we use ifstream
write operation --> we use ofstream
*/
int main(){
// string s;
// cout<<"Enter your name ";
// cin>>s;
// ofstream out("samplefile.txt");
// out<<"your name is "+s;
// out.close();
ifstream in("samplefile.txt");
string content;
getline(in,content);
cout<<content;
in.close();
return 0;
}