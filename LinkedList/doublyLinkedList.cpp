#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *previous;
    struct node *next;
};
void traversalList(struct node *start){
    if(start->next!=NULL){
    while(start!=NULL){
    cout<<"DATA: "<<start->data<<endl;
    start=start->next;
    }
    }
    else if(start!=NULL){
    while(start!=NULL){
        cout<<"DATA: "<<start->data<<endl;
        start=start->previous;
    }
    }
}
int main(){
    struct node *first=new struct node();  
    struct node *second=new struct node();  
    struct node *third=new struct node();  
    struct node *fourth=new struct node();  
    // Assigning values
    first->previous=NULL;
    first->data=5;
    first->next=second;
    second->previous=first;
    second->data=6;
    second->next=third;
    third->previous=second;
    third->data=7;
    third->next=fourth;
    fourth->previous=third;
    fourth->data=8;
    fourth->next=NULL;
    traversalList(first);
    cout<<"Traversing from last\n"<<endl;
    traversalList(fourth);
    return 0;
}