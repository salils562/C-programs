#include<iostream> //getline is best way to read files
#include<fstream>
using namespace std;

int main(){
ofstream out;
out.open("samplefile.txt");
out<<"Hello world hope everyone is good\n";
out<<"This is me salil";
out.close();
ifstream in;
in.open("samplefile.txt");
// one way to read file
// string s,s2,s3,s4;
// in>>s>>s2>>s3>>s4;
// cout<<s<<" "<<s2<<" "<<s3<<s4;
// Another way to read file
string s7;
while(in.eof()==0)
{
getline(in,s7);
cout<<s7;
cout<<"\n";
}
in.close();
return 0;
}