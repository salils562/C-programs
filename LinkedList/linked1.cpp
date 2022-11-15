#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
// function for traversing a linked list
void linkedListTraversal(struct node *head){
while(head!=NULL){
cout<<"The data is "<<head->data<<endl;
head=head->next;
}
}
int main(){
    struct node *first=new struct node();
    struct node *second=new struct node();
    struct node *third=new struct node();
    // setting first
    first->data=5;
    first->next=second;
    // setting second
    second->data=6;
    second->next=third;
    // setting third
    third->data=7;
    third->next=NULL;
    linkedListTraversal(first);
    return 0;
}