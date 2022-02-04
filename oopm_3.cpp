// OOPs - Classes and objects
// Classes --> structures + more (can have methods and properties)
// Classes --> can make few members private and public
#include<iostream>
#include<string>
using namespace std;
class binary{
private:    
void checkb();
string s;            //by default members of class are private
public:
void inputb();
void ones();
void display();
};
void binary :: inputb(){
cout<<"Enter the binary number:"<<endl;
cin>>s;
}
void binary :: checkb(){
for (int i=0;i<s.length();i++)
{
    if (s.at(i)!='0' && s.at(i)!='1')
    {
    cout<<"It is not a binary number"<<endl;
    exit(0);
    }
}
cout<<"It is the binary number"<<endl;
}
void binary :: ones(){
    checkb();
    for (int i=0;i<s.length();i++)
    {
    if (s.at(i)=='1')
    s.at(i)='0';
    else
    s.at(i)='1';
    }
}
void binary :: display(){
cout<<s<<endl;
}
int main(){
binary b;
b.inputb();
/* b.checkb(); --> it is only called nesting of function since, we called this funtion 
                  inside another function of class */
b.ones();
b.display();
return 0;
}