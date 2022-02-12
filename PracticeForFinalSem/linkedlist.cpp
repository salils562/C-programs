#include<iostream>
using namespace std;
struct list{
int data;
struct list *next;
};

void linkedListTraversal(struct list *e){
while(e!=NULL){
cout<<(e->data)<<endl;
e=e->next;
}
}
int main(){
struct list *first=new list;
struct list *second=new list;
struct list *third=new list;
first->data=4;
first->next=second;
second->data=5;
second->next=third;
third->data=6;
third->next=NULL;
linkedListTraversal(first);
return 0;
}