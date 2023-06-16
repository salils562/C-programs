#include<iostream>
#define size 10
using namespace std;
struct Queue{
int arr[size];
int front,rear;
};
void EnQueue(struct Queue *ptr,int data){
if(ptr->front==-1){
ptr->front=ptr->rear=0;
ptr->arr[ptr->rear]=data;
}else if(ptr->rear==size-1){
printf("Queue is full");
return;
}else{
    ptr->rear++;
    ptr->arr[ptr->rear]=data;
}
}
int DeQueue(struct Queue *ptr){
    if(ptr->front==-1){
        printf("Queue is empty\n");
        return -1;
    }
    else if(ptr->front==ptr->rear){
        int temp=ptr->arr[ptr->front];
        ptr->front=ptr->rear=-1;
        return temp;
    }else{
        int temp=ptr->arr[ptr->front];
        ptr->front++;
        return temp;
    }
}
int main(){
    struct Queue q;
    q.front=-1;
    q.rear=-1;
    EnQueue(&q,10);
    EnQueue(&q,20);
    printf("%d\n",q.arr[q.front]);
    DeQueue(&q);
    printf("%d\n",q.arr[q.front]);
    DeQueue(&q);
    DeQueue(&q);
    EnQueue(&q,10);
    printf("%d\n",q.arr[q.front]);
    return 0;
}