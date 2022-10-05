using namespace std;
#include<bits/stdc++.h>

struct Queue
{
    int *arr;
    int front=0;
    int back=0;
    unsigned capacity;
    
};
Queue* createqueue(unsigned capacity)
{
    Queue* queues= new Queue;
    queues->arr=new int[capacity];
    queues->capacity=capacity;
    return queues;
}
void push(Queue* queues,int item)
{
    queues->arr[queues->front++]=item;
    cout<<queues->arr[queues->front]<<"\n";
    
}
int pop(Queue* queues)
{
    return queues->arr[queues->back++];
    
}
int peek(Queue* queues, int pos)
{
    return queues->arr[queues->back];
}
void clearqueue(Queue* queues)
{
    while(queues->front!=queues->back)
    {
        cout<<queues->arr[queues->back++]<<" ";
    }
    cout<<endl;
}
int main()
{
    Queue* queues=createqueue(10);
    push(queues,10);
    push(queues,20);
    push(queues,30);
    cout<<pop(queues)<<endl;
    peek(queues,2);
    clearqueue(queues);
    return 0;
}
