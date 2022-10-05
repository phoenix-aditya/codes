#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

template<typename T>
class treenode{
public:
    T data;
    vector<treenode*> children;
    treenode(T data)
    {
        this->data=data;
    }
};

//returning number of nodes in tree
int numberofnodesintree(treenode<int>* root)
{
    //calculating number of nodes below root
    int temp=0;
    for(auto x:root->children)
        temp+=numberofnodesintree(x);
//    returning number of nodes below root +1
    return 1+temp;
}

treenode<int>* treeinputlevelwise()
{
    queue<treenode<int>*> q;
    cout<<"enter data: ";
    int data;
    cin>>data;
    
    treenode<int>* root=new treenode<int>(data);
    q.push(root);
    
    while(q.size()!=0)
    {
        treenode<int>* front=q.front();
        q.pop();
        cout<<"enter number of chidlren of "<<front->data<<": ";
        int children;
        cin>>children;
        int temp;
        for(int i=0;i<children;i++)
        {
            cout<<"enter data for child "<<i<<" : ";
            cin>>temp;
            treenode<int>* newnode=new treenode<int>(temp);
            q.push(newnode);
            front->children.push_back(newnode);
        }
    }
    
    return root;
}

void displaylevelwise(treenode<int>* root)
{
    queue<treenode<int>*> q;
    q.push(root);
    
    while(q.size()!=0)
    {
        treenode<int>* front=q.front();
        q.pop();
        cout<<front->data<<" : ";
        for(auto x:front->children)
        {
            cout<<x->data<<",";
            q.push(x);
        }
        cout<<endl;
    }
}
treenode<int>* treeinput()
{
    int data;
    cout<<"enter data: ";
    cin>>data;
    
    treenode<int>* root=new treenode<int>(data);
    
    cout<<"enter number of nodes: ";
    int nodes;
    cin>>nodes;
    
    for(int i=0;i<nodes;i++)
    {
        cout<<"enter children for parent "<<root->data<<" ";
        cin>>data;
        root->children.push_back(treeinput());
    }
    return root;
}

void printtree(treenode<int>* root)
{
    cout<<root->data<<" : ";
    for(auto x:root->children)
        cout<<x->data<<" ";
    cout<<endl;
    for(auto x:root->children)
        printtree(x);
}
int main()
{
    treenode<int>* root=treeinputlevelwise();
    displaylevelwise(root);
    cout<<"number of nodes in tree are: "<<numberofnodesintree(root)<<endl;
    
    return 0;
}
