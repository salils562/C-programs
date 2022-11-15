// Implementing stack
#include <iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};
// push operation
void push(struct stack *ptr,int value){
ptr->top++;
ptr->arr[ptr->top]=value;
}
// cheking stack 
int isEmpty(struct stack *ptr){
    if(ptr->top==(-1)){
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==((ptr->size)-1)){
        return 1;
    }
    return 0;
}
int main()
{
    struct stack *s=new struct stack();
    s->size=5;
    s->top=-1;
    s->arr=new int[s->size];
    return 0;
}