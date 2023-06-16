#include<stdio.h>
#include<stdlib.h>
struct Queue{
int data;
int priority;
struct Queue *next;
};
void Traversal(struct Queue *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}
struct Queue *EnQueue(struct Queue *head,int data,int priority){
struct Queue *ptr=head;
struct Queue *before=head;
while(ptr->next!=NULL){
    if((ptr->next)->priority>priority){
        struct Queue *newnode=malloc(sizeof(struct Queue));
        before=ptr;
        newnode->priority=priority;
        newnode->data=data;
        newnode->next=ptr->next;
        before->next=newnode; 
        break;
    }else{
        ptr=ptr->next;
    } 
}
if(ptr->next==NULL){
struct Queue *newnode=malloc(sizeof(struct Queue));
ptr->next=newnode;
newnode->data=data;
newnode->next=NULL;
}
return head;
}
int main(){
    struct Queue *a=malloc(sizeof(struct Queue));
    struct Queue *b=malloc(sizeof(struct Queue));
    struct Queue *c=malloc(sizeof(struct Queue));
    struct Queue *d=malloc(sizeof(struct Queue));
    
    a->data=10;
    a->priority=1;
    a->next=b;
    b->data=20;
    b->priority=2;
    b->next=c;
    c->data=30;
    c->priority=2;
    c->next=d;
    d->data=40;
    d->priority=4;
    d->next=NULL;
    Traversal(a);
    printf("AFter inserting\n");
    a=EnQueue(a,70,3);
    a=EnQueue(a,80,5);
    a=EnQueue(a,5,1);
    Traversal(a);

    return 0;
}