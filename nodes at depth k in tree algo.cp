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
};
void nodesatdepth(treenode<int>* root, int depth)
{
    if(root==nullptr)
        return;
        
    if(depth==0)
    {cout<<root->data<<" ";return;}
    else
    {
        for(auto x:root->children)
        {
            nodesatdepth(x, depth-1);
        }
    }
}
int heightoftree(treenode<int>* root)
{
    int maxheight=1;
    if(root->children.size()==0)
        return maxheight;
    else
    {
        for(auto x:root->children)
        {
            maxheight=max(maxheight,heightoftree(x)+1);
        }
    }
    return maxheight;
}
treenode<int>* inputtreelevelwise()
{
    queue<treenode<int>*> left;
    int data;
    cout<<"Enter data: ";
    cin>>data;
    treenode<int>* root=new treenode<int>(data);
    left.push(root);
    
    while(left.size()!=0)
    {
        treenode<int>* front=left.front();
        left.pop();
        int children;
        cout<<"enter number of children of node "<<front->data;
        cin>>children;
        int tempdata;
        for(int i=0;i<children;i++)
        {
            cout<<"enter data of child "<<i<<" : ";
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
        
        cout<<front->data<<" : ";
        for(auto x:front->children)
        {cout<<x->data<<",";left.push(x);}
        cout<<endl;
    }
}

treenode<int>* inputtree()
{
    cout<<"enter data: ";
    int data;
    cin>>data;
    
    treenode<int>* root=new treenode<int>(data);
    cout<<"enter children of "<<root->data<<": ";
    int children;
    cin>>children;
    
    for(int i=0;i<children;i++)
    {
        root->children.push_back(inputtree());
    }
    return root;
}

void printtree(treenode<int>* root)
{
    cout<<root->data<<": ";
    for(auto x:root->children)
        cout<<x->data;
    cout<<endl;
    for(auto x:root->children)
        printtree(x);
}

int main()
{
    treenode<int>* root=inputtreelevelwise();
    printtreelevelwise(root);
    int depth=2;
    cout<<"nodes at depth "<<depth<<" are ";
    nodesatdepth(root, depth);
    return 0;
}
