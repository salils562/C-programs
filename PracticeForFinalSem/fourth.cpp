#include<iostream>
using namespace std;
class Roll{
protected:    
int roll;
public:
void set_roll(int);
void get_roll(void);
};
void Roll::set_roll(int r){
    roll=r;
}
void Roll::get_roll(void){
cout<<"Roll number of student is: "<<roll<<endl;
}

class Exams:public Roll{
protected:
float maths,physics,hindi;
public:
void set_marks(float,float,float);
void show_marks(void);
};
void Exams::set_marks(float maths,float physics,float hindi){
this->maths=maths;
this->physics=physics;
this->hindi=hindi;    
}
void Exams::show_marks(void){
    cout<<"marks in maths are "<<maths<<endl;
    cout<<"marks in physics are "<<physics<<endl;
    cout<<"marks in hindi are "<<hindi<<endl;
}
class Marks:public Exams{
public:
void Percentage(void){
float percent=((maths+physics+hindi)/300)*100;
cout<<"Percent Earned by roll no."<<roll<<" is "<<percent<<endl;
}
};
int main(){
Marks salil,munna;
int r1,r2;
float p,m,h;
cout<<"Salil enter your roll number: ";
cin>>r1;
cout<<"Enter your marks of maths, physics and hindi: ";
cin>>p>>m>>h;
salil.set_roll(r1);
salil.get_roll();
salil.set_marks(p,m,h);
salil.show_marks();
salil.Percentage();
cout<<"Munna enter your roll number: ";
cin>>r2;
cout<<"Enter your marks of maths, physics and hindi: ";
cin>>p>>m>>h;
munna.set_roll(r2);
munna.get_roll();
munna.set_marks(p,m,h);
munna.show_marks();
munna.Percentage();
return 0;
}