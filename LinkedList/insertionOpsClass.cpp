#include <iostream>
using namespace std;
class List
{
public:
    int data;
    List *next;
    List(int data)
    {
        this->data = data;
        next = NULL;
    }
    void listTraversal(List *head){
        while(head!=NULL){
            cout<<"List data is: "<<head->data<<endl;
            head=head->next;
        }
    }
    void insertAtHead(int data,List* &head){
        List *newHead=new List(data);
        newHead->next=head;
        head=newHead;
    }
    List* insertAtLast(int data,List* head){
        List *newHead=head;
        while(newHead->next!=NULL){
            newHead=newHead->next;
        }
        List *newNode=new List(data);
        newHead->next=newNode;
        return head;
    }
    List* insertAtIndex(int data,List* indexNode,List *headNode){
     List *newHeadNode=headNode;   
     while(newHeadNode->next!=indexNode){
        newHeadNode=newHeadNode->next;
     }
     List *newNode=new List(data);
     newNode->next=newHeadNode->next;
     newHeadNode->next=newNode;
     return headNode;
    }
};
int main()
{
    List *first=new List(10);
    List *second=new List(20);
    List *third=new List(30);
    first->next=second;
    second->next=third;
    List *head=first;
    // head=head->insertAtLast(5,head);
    // head=head->insertAtLast(10,head);
    head=head->insertAtIndex(5,second,head);
    head->listTraversal(head);
    return 0;
}