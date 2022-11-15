#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
// Insertion at the beginning
struct node *insertAtStart(struct node *head,int data){
    struct node *insert=new struct node();
    insert->data=data;
    insert->next=head;
    struct node *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=insert;
    return insert;
}
// Insertion at between
struct node *insertAtBetween(struct node *head,int index,int data){ // index=3
struct node *insert=new struct node();
insert->data=data;
struct node *ptr=head;
int i=1;
while(i<(index-1)){
    ptr=ptr->next;
    i++;
}
insert->next=ptr->next;
ptr->next=insert;
return head;
}
// insertion at last
struct node *insertAtLast(struct node *head,int data){
    struct node *insert=new struct node();
    insert->data=data;
    struct node *ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=insert;
    insert->next=head;
    return head;
}
void circularTraversal(struct node *head){
    struct node *ptr=head;
    while(head->next!=ptr){
        cout<<"DATA: "<<head->data<<endl;
        head=head->next;
    }
    cout<<"DATA: "<<head->data<<endl;
}
int main(){
    struct node *first=new struct node();
    struct node *second=new struct node();
    struct node *third=new struct node();
    struct node *fourth=new struct node();
    first->data=5;
    first->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=8;
    fourth->next=first; 
    cout<<"Before insertion"<<endl;
    circularTraversal(first);
    cout<<"Enter data to insert ";
    int data;
    cin>>data;
    // first=insertAtStart(first,data);
    // cout<<"Enter where to put ";
    // int index;
    // cin>>index;
    // first=insertAtBetween(first,index,data);
    // circularTraversal(first);
    first=insertAtLast(first,data);
    circularTraversal(first);
    return 0; 
}