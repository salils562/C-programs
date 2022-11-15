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

void printList(Node* head){
    Node* temp=head;
    if(temp==NULL){
        cout<<"It is an empty list"<<endl;
    }else if(temp->next==head){
        cout<<temp->data<<endl;
    }else{
        cout<<temp->data<<endl;
        head=head->next;
        while(head!=temp){
            cout<<head->data<<endl;
            head=head->next;
        }
    }
}

void insertNode(Node* &head,int insert,int data){
    Node* newNode=new Node(data);
    Node* first=head;
    if(head==NULL){
     newNode->next=newNode;
     head=newNode;
    }else if(first->next==head){
        Node* temp=head;
        temp->next=newNode;
        newNode->next=head;
    }else{
       Node* prev=first;
       Node* after=prev->next;
       while(after->data!=insert){
         prev=prev->next;
         after=after->next;
       }
       newNode->next=prev->next;
       prev->next=newNode;
    }
}

int main(){
    Node* first=NULL;
    insertNode(first,1,5);
    insertNode(first,1,6);
    insertNode(first,6,7);
    insertNode(first,6,8);
    // insertNode(first,5,9);
    printList(first);
    return 0;
}