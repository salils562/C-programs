#include<iostream>
using namespace std;
struct Node{
int data;
struct Node *next;
};
// function for insertion of data in the beginning of list
struct Node *insertAtStart(struct Node *head,int data){
struct Node *insert=new struct Node();
insert->data=data;
insert->next=head;
return insert;
}
// function for insertion of data in between of list
struct Node *insertionInBetween(struct Node *head,int data,int index){
struct Node *insert=new struct Node();
insert->data=data;
struct Node *ptr=head;
int i=1;
while(i!=(index-1)){ 
ptr=ptr->next;
i++; 
}
insert->next=ptr->next;
ptr->next=insert; 
return head;
}
// function for insertion of data at last of List
struct Node *insertionAtLast(struct Node *head,int data){
struct Node *insert=new struct Node();
insert->data=data;
struct Node *ptr=head;
while(ptr->next!=NULL){
ptr=ptr->next;
}
insert->next=ptr->next;
ptr->next=insert;
return head;
}
// function for linked list traversal
void LinkedListTraversal(struct Node *head){
int i=1;    
while(head!=NULL){
    cout<<"The "<<i<<" data is "<<head->data<<endl;
    head=head->next;
}
}
int main(){
    struct Node *first=new struct Node();
    struct Node *second=new struct Node();
    struct Node *third=new struct Node();
    struct Node *fourth=new struct Node();
    first->data=5;
    first->next=second;
    second->data=7;
    second->next=third;
    third->data=8;
    third->next=fourth;
    fourth->data=9;
    fourth->next=NULL;
    // inserting at first
    // first=insertAtStart(first,4);
    // first=insertionInBetween(first,4,3);
    first=insertionAtLast(first,10);
    LinkedListTraversal(first);
    return 0;
}