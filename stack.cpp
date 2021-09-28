#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

 Stack* createstack(unsigned capacity)
{
    Stack* stacks=new(Stack);
    stacks->capacity=capacity;
    stacks->top=-1;
    stacks->array=new int[capacity];
    return stacks;
}

int isfull(Stack* stacks)
{
    return stacks->top==stacks->capacity-1;
}

int isempty(Stack* stacks)
{
    return stacks->top==-1;
}

void push(Stack* stacks,int item)
{
    if(isfull(stacks))
        return;
    
    stacks->array[++stacks->top]=item;
    cout<<"pushed "<<item<<"\n";
}
int pop(Stack* stacks)
{
    if(isempty(stacks))
        return INT_MIN;
    return stacks->array[stacks->top--];
}
int peek(Stack* stacks)
{
    if(isempty(stacks))
        return INT_MIN;
    return stacks->array[stacks->top];
}

int main()
{
    Stack* stacks=createstack(100);
    push(stacks,10);
    push(stacks,20);
    push(stacks,30);
    
    cout<<peek(stacks)<<"\n";
    
    cout<<pop(stacks)<<"\n";
    cout<<peek(stacks)<<"\n";
    
    
    return 0;
}
