#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int data){
    this->data=data;
    this->next=NULL;
}
};

void ListTraversal(Node* first){
    while(first!=NULL){
        cout<<"The data is "<<first->data<<endl;
        first=first->next;
    }
}

Node* ReverseFunction(Node* first){
 Node* temp=first;
 Node* prev=NULL;
 Node* forward=NULL;
 while(temp!=NULL){
    forward=temp->next;
    temp->next=prev;
    prev=temp;
    temp=forward;
 }
 return prev;
}

int getListLength(Node* first){
    int len=0;
    while(first!=NULL){
        len++;
        first=first->next;
    }
    return len;
}

Node* getMiddle(Node* first,int len){
Node* temp=first;    
int i=0;
if(len%2==0){    
while(i<(len/2)){
temp=temp->next;
i++;
}
return temp;
}else{
while(i<(len/2)){
    temp=temp->next;
    i++;
}
return temp;
}
}

int main(){
    Node* first=new Node(10);    
    Node* second=new Node(20);    
    Node* third=new Node(30);    
    Node* fourth=new Node(40);    
    Node* fifth=new Node(50);    
    Node* sixth=new Node(50);    
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    // first=ReverseFunction(first);
    // ListTraversal(first);
    cout<<getMiddle(first,getListLength(first))->data<<endl;

    
    return 0;
}