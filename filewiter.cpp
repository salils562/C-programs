#include<iostream>
#include<fstream>
using namespace std;
int main()
{
// writing into a file    
/*fstream out;
out.open("mytext.txt");
string s="Hello world\nhow are you? Is everything okay";
out<<s;
out.close();*/
//reading a file
string s;
fstream in;
in.open("mytext.txt");
while(in.eof()==0)
{
getline(in,s);
cout<<s<<endl;
}
in.close();
return 0;
}