#include<bits/stdc++.h>
using namespace std;

struct node{
    
    int data;
    node* next;
    
};
node* top=nullptr;

void push(int item)
{
    node* temp=new node;
    temp->data=item;
    temp->next=top;
    top=temp;
    cout<<"item added to stack\n";
}
void pop()
{
    if(top==nullptr)
    {
        cout<<"underflow\n";
        return;
    }
    node* temp=top;
    cout<<temp->data<<" ";
    top=temp->next;
    free(temp);
}
void peek()
{
    if(top==nullptr)
    {
        cout<<"no val\n";
        return;
    }
    node* temp=top;
    while(temp!=nullptr)
    {cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    cout<<"dynamic stack\n";
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    pop();
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    peek();
    
    
    
    return 0;
}
