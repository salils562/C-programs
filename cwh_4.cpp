#include<iostream>
using namespace std;
struct salil1{
int Id;
char favchar;
float sal;
};
//use of union 
union money{ //we can use one value at a time
int rice;
char car;
float pounds;
};
// typedef struct salil1{
// int Id;
// char favchar;
// float sal;
// }e; //we can use typedef to use struct name as short


int main()
{
//enum 
enum lunch{breakfast,powder,salad}; //it allocates values as 0,1,2
int a;
a=powder;
cout<<a;

// struct salil1 harry;
// union money m1;
// m1.rice=34;
// cout<<m1.rice<<endl;
// e salo;
// harry.Id=1;
// harry.favchar='a';
// harry.sal=32.22;
// cout<<harry.Id<<endl;
// cout<<harry.favchar<<endl;
// cout<<harry.sal<<endl;
// salo.favchar='a';
// cout<<salo.favchar;
// typedef int sali;
// sali a=2;
// cout<<a;

return 0;
}