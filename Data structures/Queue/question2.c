#include <stdio.h>
#include <stdlib.h>
#define size 10
struct Queue
{
    int arr[size];
    int front, rear;
};
void EnQueue(struct Queue *ptr, int data)
{
    if (ptr->front == -1)
    {
        ptr->front = ptr->rear = 0;
        ptr->arr[ptr->rear] = data;
    }
    else if (ptr->rear == size - 1)
    {
        printf("Queue is full");
        return;
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = data;
    }
}
int DeQueue(struct Queue *ptr)
{
    if (ptr->front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else if (ptr->front == ptr->rear)
    {
        int temp = ptr->arr[ptr->front];
        ptr->front = ptr->rear = -1;
        return temp;
    }
    else
    {
        int temp = ptr->arr[ptr->front];
        ptr->front++;
        return temp;
    }
}
int main()
{
    struct Queue q1;
    q1.front = -1;
    q1.rear = -1;
    // Equeuing in q1
    EnQueue(&q1,1);
    EnQueue(&q1,2);
    EnQueue(&q1,3);
    EnQueue(&q1,4);
    struct Queue q2;
    q2.front=-1;
    q2.rear=-1;
    int arr[4];
    int i=0;
    int j=3;
    while(i<4){
    arr[i]=DeQueue(&q1);
    i++;
    }
    while(j>=0){
        EnQueue(&q2,arr[j]);
        j--;
    }
    printf("%d\n",q2.arr[q2.front]);
    
    return 0;
}