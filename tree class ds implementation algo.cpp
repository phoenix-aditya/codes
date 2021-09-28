#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//definition of trees
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

int main()
{
    treenode<int>* root=new treenode<int>(1);
    treenode<int>* node1=new treenode<int>(2);
    treenode<int>* node2=new treenode<int>(3);
    
    root->children.push_back(node1);
    root->children.push_back(node2);
    
    
    return 0;
}
