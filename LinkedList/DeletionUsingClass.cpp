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
void traversalList(Node *head){
    while(head!=NULL){
        cout<<"The data is "<<head->data<<endl;
        head=head->next;
    }

}
Node* deletionHead(Node *head){
Node *ptr=head;
head=head->next;
free(ptr);
return head;
}

Node* deletionTail(Node *head){
    Node *ptr=head;
    Node *ptr2=NULL;
    while(ptr->next!=NULL){
        ptr2=ptr;
        ptr=ptr->next;
    }
    ptr2->next=NULL;
    free(ptr);
    return head;
}

Node* deletionAnyNode(Node *,Node *);

int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(40);
    Node *fourth=new Node(50);
    first->next=second;
    second->next=third;
    third->next=fourth;
    // traversalList(first);
    // cout<<"After deleting first node "<<endl;
    // first=deletionHead(first);
    // traversalList(first);
    traversalList(first);
    cout<<"Traversing after deletion"<<endl;
    // first=deletionTail(first);
    first=deletionAnyNode(first,third);
    traversalList(first);
    return 0;
}

Node* deletionAnyNode(Node *head,Node *nodeName){
    Node *ptr=head;
    Node *ptr2=NULL;
    while(ptr!=nodeName){
        ptr2=ptr;
        ptr=ptr->next;
    }
    ptr2->next=ptr->next;
    free(ptr);
    return head;
}