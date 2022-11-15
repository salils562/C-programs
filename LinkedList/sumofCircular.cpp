#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void traversalCircularList(Node *first)
{
    Node *temp = first;
    while (temp->next != first)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
void sumAllElements(Node* first){
    Node* temp=first;
    int sum=0;
    while(temp->next!=first){
    sum=sum+temp->data;
    temp=temp->next;
    }
    sum=sum+temp->data;
    cout<<"The sum of all elements of circular list is "<<sum<<endl;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->next = third;
    third->next = first;
    traversalCircularList(first);
    sumAllElements(second);
    return 0;
}