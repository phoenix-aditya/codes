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

void return_max_childsum(treenode<int>* root,treenode<int>** ans, int* maxsum)
{
    int val=0;
    val=root->data;
    
    for(auto x:root->children)
        val+=x->data;
    
    if(val>*maxsum)
    {
        *maxsum=val;
        *ans=root;
    }
    for(auto x:root->children)
    {
        return_max_childsum(x, ans, maxsum);
    }
}

//function that replaces nodes with their depth values
void replace_nodes_with_depth(treenode<int>* root, int depth)
{
    root->data=depth;
    for(auto x:root->children)
        replace_nodes_with_depth(x, depth+1);
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
    treenode<int>* ans=nullptr;
    int maxsum=0;
    
    return_max_childsum(root, &ans, &maxsum);
    if(ans!=nullptr)
    cout<<ans->data<<endl;
    
    return 0;
}
