using namespace std;
#include<bits/stdc++.h>

struct node
{
    int item;
    node* link=nullptr;
};
node* Front=nullptr;
node* Back=nullptr;

void push(int item)
{
    if(Back==nullptr)
    {
        Back=new node;
        Back->link=nullptr;
        Back->item=item;
        Front=Back;
    }
    else
    {
        node* temp=new node;
        Back->link=temp;
        temp->item=item;
        temp->link=nullptr;
        Back=temp;
    }
}
int pop()
{
    
    if(Front!=nullptr)
    {
        node* temp=Front;
        Front=temp->link;
        return temp->item;
    }
    else
        return 0;
}
void display()
{
    node* temp=Front;
    if(Front==nullptr && Back==nullptr)
        cout<<"empty queue\n";
    else
    {
        while(temp!=nullptr)
        {
            cout<<temp->item<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }
}

int main()
{
    int ch;
       cout<<"1) Insert element to queue"<<endl;
       cout<<"2) Delete element from queue"<<endl;
       cout<<"3) Display all the elements of queue"<<endl;
       cout<<"4) Exit"<<endl;
    do {
       cout<<"Enter your choice : "<<endl;
       cin>>ch;
       switch (ch) {
           case 1: int n;
               cout<<"enter: ";
               cin>>n;
               push(n);
             break;
           case 2: cout<<"item popped: "<<pop()<<endl;
             break;
           case 3: display();
             break;
          case 4: cout<<"Exit"<<endl;
             break;
          default: cout<<"Invalid choice"<<endl;
       }
    } while(ch!=4);
    
    
    
    
    return 0;
}
