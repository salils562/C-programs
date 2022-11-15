#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
void Circulartraversal(struct node *head){
   struct node *stop=head;
   while(head->next!=stop){
    cout<<head->data<<endl;
    head=head->next;
   }
   cout<<head->data<<endl;
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
    Circulartraversal(first);
    return 0;
}