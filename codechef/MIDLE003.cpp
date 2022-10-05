#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

struct node{
    int data;
    node* link;
};

bool ischanged=false;

node* head=nullptr;
node* tail=nullptr;

vector<node*> pointers;

void push(int data)
{
    if(head==nullptr)
    {
        node* temp=new node;
        temp->data=data;
        temp->link=nullptr;
        pointers.push_back(temp);
        
        head=temp;
        tail=temp;
        return;
    }
    
    node* temp2=new node;
    temp2->data=data;
    temp2->link=nullptr;
    pointers.push_back(temp2);

    tail->link=temp2;
    tail=temp2;

}

void weirdinsert(int y ,int x)
{
    node* temp=head;
    
    bool check=false;
    while(temp!=nullptr)
    {
        if(temp->data==y)
        {check=true;break;}
        temp=temp->link;
    }
    
    if(check)
    {
        node* temp2=new node;
        pointers.push_back(temp2);
        
        temp2->data=x;
        temp2->link=temp->link;
        temp->link=temp2;
        return;
    }
    
    temp=head;
    if(temp->data==x)
    {
        node* temp2=new node;
        pointers.push_back(temp2);
        temp2->data=y;
        temp2->link=head;
        head=temp2;
        return;
    }
    while(temp->link!=nullptr)
    {
        if(temp->link->data==x)
        {check=true;break;}
        temp=temp->link;
    }
    
    node* temp2=new node;
    pointers.push_back(temp2);
    
    temp2->data=y;
    temp2->link=temp->link;
    temp->link=temp2;
}

void insertbwxy(int x, int y, int data)
{
    node* start=nullptr;
    node* endp=nullptr;
    int counter=1;
    
    node* temp=head;
    
    while(temp!=nullptr)
    {
        if(temp->data==x)
        {
            start=temp;
            break;
        }
        temp=temp->link;
    }
    
    temp=start;
    
    while(temp!=nullptr)
    {
        
        if(temp->data==y)
        {
            endp=temp;
            break;
        }
        counter++;
        temp=temp->link;
    }
    
    
    int h=(counter+1)/2;
    temp=start;
    for(int i=1;i<h;i++)
    {
        temp=temp->link;
    }
    node* temp2=new node;
    pointers.push_back(temp2);
    
    temp2->data=data;
    temp2->link=temp->link;
    temp->link=temp2;
}

void insertafterp(int x, int p)
{
    node* temp=head;
    
    while(temp!=nullptr)
    {
        if(temp->data==x)
            break;
        temp=temp->link;
    }
    
    node* temp2=temp;
    for(int i=0;i<p;i++)
    {
        if(temp2->link==nullptr)
        {temp2->link=head;ischanged=true;}
        temp2=temp2->link;
    }
    temp->link=temp2;
}

void display()
{
    node* temp=head;
    
    while(temp!=nullptr)
    {cout<<temp->data<<" ";temp=temp->link;}
}
    



int main()
{
    int n;
    cin>>n;
    
    char c;
    int x, y, data, ctl;
    while(n--)
    {
        cin>>c;
        if(c=='I')
        {
            cin>>ctl;
            
            if(ctl==0)
            {
                cin>>x;
                push(x);
            }
            else if(ctl==1)
            {
                cin>>y>>x;
                weirdinsert(y, x);
            }
            else if(ctl==2)
            {
                cin>>x>>y>>data;
                insertbwxy(x, y, data);
            }
        }
        else
        {
            cin>>x>>y;
           insertafterp(x, y);
        }
//       display();
    }
    
    map<int, int> ans;
    int ansno=0;
    for(auto x: pointers)
    {
        if(x->link!=nullptr)
        {
            if(!ans[x->link->data])
            {ans[x->link->data]=1;}
            else
            {ans[x->link->data]++;}
        }
    }
    
    for(auto x:ans)
    {
        if(x.second>1)
            ansno++;
    }
    if(ischanged)
    {cout<<1<<endl;}
    else
        cout<<0<<endl;
    
    if(ansno==0)
    {
        cout<<0<<endl;
        display();
    }
    else
    {
        cout<<ansno<<endl;
        for(auto x: ans)
        {
            if(x.second>1)
            cout<<x.first<<" ";
        }
        cout<<endl;
        for(auto x:ans)
        {
            if(x.second>1)
            cout<<x.second<<" ";}
    }
    return 0;
}
