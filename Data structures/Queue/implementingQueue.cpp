#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int front = 0;
    int last = 0;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    void push(int element)
    {
     if(last<size){
     arr[last]=element;
     last++;
     }else{
        cout<<"Queue is full"<<endl;
     }   
    }
    void pop(){
       if(front<size){
       arr[front]=-1;
       front++;
       }else{
        cout<<"Queue is empty"<<endl;
       } 
    }
    int Front(){
        return arr[front];
    }
};
int main()
{
    Queue *q=new Queue(5);
    q->push(3);
    q->push(4);
    q->push(5);
    q->push(6);
    q->push(7);
    // created arr[]={3,4,5};
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    // q->pop();
    cout<<"The front element is "<<q->Front()<<endl;
    return 0;
}