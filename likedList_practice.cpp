#include <iostream>
using namespace std;
struct emp
{
    int data;
    struct emp *ptr;
};
int main()
{
    //Created a linked list without dynamic memory allocation.
    struct emp first;
    struct emp second;
    struct emp third;
    first.data = 23;
    first.ptr = &second;
    second.data = 49;
    second.ptr = &third;
    third.data = 56;
    third.ptr = NULL;
    struct emp *p;
    p = &first;
    while (p != NULL)
    {
        cout << (*p).data << endl;
        p = (*p).ptr;
    }
    return 0;
}