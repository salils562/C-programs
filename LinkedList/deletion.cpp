#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
// deleting first node
struct node *deleteFirstNode(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// deleting node from between
struct node *deleteFromBetween(struct node *head,int index){
int i=1;
struct node *ptr=head;
while(i<(index-1)){
ptr=ptr->next;
i++;
}
struct node *ptr2=ptr->next;
ptr->next=ptr2->next;
free(ptr2);
return head;
}
// delete node from last
struct node *deleteFromLast(struct node *head){
    struct node *ptr=head;
    struct node *ptr2=ptr->next;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(ptr2);
    return head;
}
// Traversal
void linkedListTraversal(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    struct node *first = new struct node();
    struct node *second = new struct node();
    struct node *third = new struct node();
    struct node *fourth = new struct node();

    // Assigning values
    first->data = 5;
    first->next = second;
    second->data = 6;
    second->next = third;
    third->data = 7;
    third->next = fourth;
    fourth->data = 8;
    fourth->next = NULL;
    // first=deleteFirstNode(first);
   /* cout<<"Enter which index you want to delete ";
    int index;
    cin>>index;
    first=deleteFromBetween(first,index);
    linkedListTraversal(first); */
    first=deleteFromLast(first);
    linkedListTraversal(first);
    return 0;
}