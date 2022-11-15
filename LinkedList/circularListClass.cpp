#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;
Node(int data){
    this->data=data;
    this->next=NULL;
}
};

void circularListTraversal(Node *head){
    Node *temp=head;
    cout<<"The data is "<<head->data<<endl;
    head=head->next;
    while(head!=temp){
        cout<<"The data is "<<head->data<<endl;
        head=head->next;
    }
}


int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    first->next=second;
    second->next=third;
    third->next=first;
    circularListTraversal(first);
    return 0;
}