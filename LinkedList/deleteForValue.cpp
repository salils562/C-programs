#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
struct node *deleteForValue(struct node *head,int value){
struct node *ptr=head;
struct node *ptr2=head->next;
while(ptr2->data!=value){
    ptr=ptr->next;
    ptr2=ptr2->next;
}
ptr->next=ptr2->next;
free(ptr2);
return head;
}
void traversal(struct node *head){
    while(head!=NULL){
        cout<<"DATA: "<<head->data<<endl;
        head=head->next;
    }
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
    fourth->next=NULL;
    traversal(first);
    cout<<"Enter the value for which you want to delete from list "<<endl;
    int value;
    cin>>value;
    first=deleteForValue(first,value);
    traversal(first);
    return 0;
}