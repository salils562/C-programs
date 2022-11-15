// it follows the first in first out data structure
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    q.pop(); // pops from the front element
    cout<<"front element in queue is "<<q.front()<<endl;
    cout<<"size of queue is "<<q.size()<<endl;
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    return 0;
}