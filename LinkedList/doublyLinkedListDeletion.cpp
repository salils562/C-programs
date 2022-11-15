#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void doublyListTraversal(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
void doublyListTraversalBack(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->data << endl;
        tail = tail->prev;
    }
}
void deleteHead(Node *&head)
{
    Node *temp = head;
    Node *nodeToDelete = head;
    temp = nodeToDelete->next;
    temp->prev = NULL;
    free(nodeToDelete);
    head = temp;
}
void deleteTail(Node *&head)
{
    Node *starting = head;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *nodeToDelete = temp;
    temp = nodeToDelete->prev;
    temp->next = NULL;
    free(nodeToDelete);
    head = starting;
}
void deleteFromTarget(Node *target){
Node *previousNode=target->prev;
Node *afterNode=target->next;
previousNode->next=afterNode;
afterNode->prev=previousNode;
free(target);   
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third=new Node(30);
    Node *fourth = new Node(40);
    first->next = second;
    second->prev = first;
    second->next = third;
    third->next=fourth;
    third->prev = second;
    fourth->prev=third;
    deleteFromTarget(second);
    deleteFromTarget(third);
    doublyListTraversal(first);

    return 0;
}