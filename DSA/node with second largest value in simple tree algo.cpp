#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

template<class T>
class treenode{
public:
    T data;
    vector<treenode*> children;
    
    treenode(T data)
    {
        this->data=data;
    }
    ~treenode()
    {
        for(auto x: this->children)
            delete x;
    }
};

void secondlargestintree(treenode<int>* root, treenode<int>** first, treenode<int>** second)
{
    if(root==nullptr)
        return;
    if(!(*first))
        *first=root;
    
    else if(root->data>(*first)->data)
    {
        *first=root;
    }
    if(!(*second))
    {
        if(root->data<(*first)->data)
            *second=root;
    }
    else if(root->data<(*first)->data && root->data>(*second)->data)
        *second=root;
    
    for(auto x:root->children)
        secondlargestintree(x, first, second);
}

treenode<int>* inputtreelevelwise()
{
    queue<treenode<int>*> left;
    int data;
    cin>>data;
    treenode<int>* root=new treenode<int>(data);
    left.push(root);
    
    while(left.size()!=0)
    {
        treenode<int>* front=left.front();
        left.pop();
        int children;
        cin>>children;
        int tempdata;
        for(int i=0;i<children;i++)
        {
            cin>>tempdata;
            treenode<int>* temp=new treenode<int>(tempdata);
            left.push(temp);
            front->children.push_back(temp);
        }
    }
    return root;
}

void printtreelevelwise(treenode<int>* root)
{
    queue<treenode<int>*> left;
    left.push(root);
    
    while(left.size()!=0)
    {
        treenode<int>* front=left.front();
        left.pop();
        
        cout<<front->data<<" ";
        for(auto x:front->children)
        {left.push(x);}
    }
}

treenode<int>* inputtree()
{
    int data;
    cin>>data;
    
    treenode<int>* root=new treenode<int>(data);
    int children;
    cin>>children;
    
    for(int i=0;i<children;i++)
    {
        root->children.push_back(inputtree());
    }
    return root;
}



//tree input-
// 10 3 20 30 40 2 40 50 0 0 0 0

int main()
{
    treenode<int>* root=inputtreelevelwise();
     printtreelevelwise(root);
    cout<<endl;
    treenode<int>* first=nullptr;
    treenode<int>* second=nullptr;
    
    secondlargestintree(root, &first, &second);
    
    cout<<second->data<<endl;
    
    return 0;
}
