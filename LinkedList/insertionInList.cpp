// There will be three cases of insertion in linked list
/*
1. Insertion in beginning
2. Insetion in betweeen
3. Insertion at the end
*/

#include<iostream>
using namespace std;
struct list{
int data;
struct list *next;
};
// inserting at beginning
struct list* insertInStart(struct list *head,int data){
struct list *insert=new struct list();
insert->data=data;
insert->next=head;
return insert;
}

// inserting at between
struct list* insertInbetween(struct list *head,int data,int index){// 12 2
struct list *insert=new struct list();
insert->data=data;
struct list *ptr=head;
int i=0;
while(i!=index-1){
    ptr=ptr->next;
    i++;
}
insert->next=ptr->next;
ptr->next=insert;
return head;
}

// inserting at the end
struct list* insertAtEnd(struct list *head,int data){
struct list* last=new struct list();
last->data=data;
struct list *ptr=head;
while(ptr->next!=NULL){
    ptr=ptr->next;
}
last->next=ptr->next;
ptr->next=last;
return head;
}
// traversing list 
void traversal(struct list *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
int main(){
    struct list *first=new struct list();
    struct list *second=new struct list();
    struct list *third=new struct list();
    first->data=5;
    first->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=NULL;
    // first=insertInStart(first,8);
    // first=insertInbetween(first,12,2);
    first= insertAtEnd(first,33);
    traversal(first);
    return 0;
}