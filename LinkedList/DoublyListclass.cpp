#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;
Node *prev;
Node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}
};

void traversingNode(Node *);
void traversePrev(Node *);
int getLength(Node *);
void insertAtHead(Node* &,int);
void insertAtTail(Node* &,int);

int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    // cout<<"The length of our linked list is "<<getLength(first)<<endl;
    // insertAtHead(first,5);
    // insertAtTail(fourth,5);
    // insertAtTail(fourth,55);
    traversingNode(first);
    // traversePrev(fourth);
    return 0;
}

void traversingNode(Node *head){
    Node *ptr=head;
    while(ptr!=NULL){
        cout<<"The data is "<<ptr->data<<endl;
        ptr=ptr->next;
    }

}

void traversePrev(Node *tail){
Node *ptr=tail;
while(tail!=NULL){
    cout<<"The data is in tailed way: "<<tail->data<<endl;
    tail=tail->prev;
}

}

void insertAtHead(Node* &head,int data){
    Node *ptr=head;
    Node *newHead=new Node(data);
    newHead->next=ptr;
    ptr->prev=newHead;
    head=newHead;
}

void insertAtTail(Node* &tail,int data){
    Node *newTail=new Node(data);
    newTail->prev=tail;
    tail->next=newTail;
    tail=newTail;
}

int getLength(Node *head){
    Node *ptr=head;
    int cnt=0;
    while(ptr!=NULL){
        cnt++;
        ptr=ptr->next;
    }
    return cnt;
}

