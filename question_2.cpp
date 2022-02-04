#include<iostream>
using namespace std;

class animal{
private:
string name;
string sound;
public:
void setdata(string n,string s);
void display();
};
void animal :: setdata(string n,string s){
name=n;
sound=s;
}
void animal :: display(){
cout<<"Animal name is "<<name<<endl;
cout<<name<<" "<<sound<<endl;
}
int main(){
animal lion,elephant;
lion.setdata("loin","roars");
lion.display();
elephant.setdata("elephant","trumps");
elephant.display();
return 0;
}