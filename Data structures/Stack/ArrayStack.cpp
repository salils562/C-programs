#include<iostream>
using namespace std;
struct stack{
int top;
int size;
int *arr;
};
int isEmpty(struct stack *s){
    if(s->top==(-1)){
    return 1;
    }
    return 0;
}
int isFull(struct stack *s){
    if(s->top==(s->size)-1){
        return 1;
    }
    return 0;
}
void push(struct stack *s,int value){
    if(isFull(s)){
        cout<<"Stack overflow!"<<endl;
    }
    else{
    s->top++;
    s->arr[s->top]=value;
    }
}
void pop(struct stack *s){
    if(isEmpty(s)){
      cout<<"Stack underflow"<<endl;
    }
    else{
        s->top--;
    }
}
int getValueBetween(struct stack *s,int index){
int getvalue=s->top-index;
if(getvalue>=0){
return s->arr[getvalue];
}    
return -1;
}
int main(){
    struct stack *s=new struct stack();
    s->top=-1;
    s->size=5;
    s->arr=new int[s->size];
    // cheaking getValue from between function
    push(s,3);
    push(s,4);
    push(s,5);
    int value=getValueBetween(s,2);
    cout<<value<<endl;
    // push(s,3);
    // cout<<isEmpty(s)<<endl;
    // cout<<isFull(s)<<endl;
    /*
    int i=0;
    int full=isFull(s);
    int empty=isEmpty(s);
    cout<<"Before pushing,full "<<full<<endl;
    cout<<"Before pushing, empty "<<empty<<endl;
    cout<<"Start pushing the values"<<endl;
    while(i<s->size){
    cout<<"Enter value to push ";
    int value;
    cin>>value;
    push(s,value);
    i++;
    }
    full=isFull(s);
    empty=isEmpty(s);
    cout<<"After pushing,full "<<full<<endl;
    cout<<"After pushing, empty "<<empty<<endl;
    for(int j=0;j<s->size;j++){
        pop(s);
    }
    full=isFull(s);
    empty=isEmpty(s);
    cout<<"After popping,full "<<full<<endl;
    cout<<"After popping, empty "<<empty<<endl;
    */

    return 0;
}