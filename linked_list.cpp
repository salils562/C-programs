#include<iostream>
using namespace std;
struct list{
int data;
struct list *next;
};

void linkedListTraversal(struct list *ptr){
int i=1;    
while(ptr!=NULL)
{
    cout<<"The "<<i<<" element is "<<ptr->data<<endl;
    ptr=ptr->next;
    i++;
}
}
int main(){
// We dynamically allocated the structures    
struct list *first=new list;
struct list *second=new list;
struct list *third=new list;
struct list *fourth=new list;

(*first).data=2;
first->next=second;
second->data=4;
second->next=third;
third->data=5;
third->next=fourth;
fourth->data=8;
fourth->next=NULL;
linkedListTraversal(first);
return 0;
}