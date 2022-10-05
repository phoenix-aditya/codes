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
    
//    deleting root will lead to deleting of the whole tree
//    as if we call delete on the root node, it will call destructor of this class
    ~treenode()
    {
        for(auto x: this->children)
            delete x;
    }
};


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
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0

int main()
{
    treenode<int>* root=inputtreelevelwise();
    printtreelevelwise(root);
   
    // we call delete root & it goes to the destructor of the treenode class
    delete root;
    
    return 0;
}
