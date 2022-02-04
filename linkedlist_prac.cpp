#include <iostream>
using namespace std;
struct list
{
    string data;
    struct list *next;
};
void linkedlist(struct list *ptr)
{
    while (ptr != NULL)
    {
        cout << "name of member is " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct list *first = new list;
    struct list *second = new list;
    struct list *third = new list;
    struct list *fourth = new list;
    first->data = "salil sharma";
    first->next = second;
    second->data = "anuj agrawal";
    second->next = third;
    third->data = "harshit gupta";
    third->next = fourth;
    fourth->data = "raj mishra";
    fourth->next = NULL;
    linkedlist(first);
    return 0;
}
