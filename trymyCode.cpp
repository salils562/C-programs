#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out("C:\\Users\\salil\\OneDrive\\Desktop\\my creation\\usingcpp.txt");
string s="Hello salil sharma.\nHow are you?";
out<<s;
out.close();


return 0;    
}