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
    void printData(List *);
    List* insertAtHeadUsingPointer(int,List *);
    void insertAtHead(int,List* &);
};
void List::printData(List *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }

}
List* List::insertAtHeadUsingPointer(int data,List *head){
    List *newHead=new List(data);
    newHead->next=head;
    head=newHead;
    return head;
}
void List::insertAtHead(int data,List* &head){
List *newHead=new List(data);
newHead->next=head;
head=newHead;
}
int main()
{
    List *first = new List(10);
    List *second=new List(20);
    List *third=new List(30);
    first->next=second;
    second->next=third;
    // first=first->insertAtHeadUsingPointer(5,first);
    first->insertAtHead(5,first);
    first->printData(first);
    return 0;
}