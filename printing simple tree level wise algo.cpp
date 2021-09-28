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

//tree output level wise
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
        {
            cout<<x->data<<", ";
            left.push(x);
        }
        cout<<endl;
    }
}

//take input level wise
treenode<int>* treeinputlevelwise()
{
    //queue to hold the nodes whose children are yet to be taken
    queue<treenode<int>*> q;
    
//    entering data of root node
    cout<<"enter data: ";
    int data;
    cin>>data;
    
    treenode<int>* root= new treenode<int>(data);
//    pushing root to the queue
    q.push(root);
    
//    we will take children inputs until the queue is not finished
    while(q.size()!=0)
    {
//        front returns the first inputted element in queue
//        therefore the address of the first pointer left in queue
        treenode<int>* front=q.front();
//        save the address and remove it from queue using FIFO queue
        q.pop();
//        taking input of number of children
        int children, childdata;
        cout<<"enter number of children of "<<front->data<<": ";
        cin>>children;
        for(int i=0;i<children;i++)
        {
            cout<<"enter child "<<i<<" of parent node "<<front->data<<": ";
            cin>>childdata;
//            we allocate dynamically as if not the pointer will be deleted with the next
//            iteration of the for loop
            treenode<int>* child=new treenode<int>(childdata);
            
//            pushing the new node in children of current root node
            front->children.push_back(child);
//            pushing the new node in the queue so we can take its children later
            q.push(child);
        }
    }
//    returning root
    return root;
}

treenode<int>* treeinput()
{
//    inputing data for the given node
    int data;
    cout<<"enter data: ";
    cin>>data;
//    making a root pointer and initializing with data
    treenode<int>* root=new treenode<int>(data);
    
//    inputing the number of childeren for the current root node
    cout<<"Enter number of children: ";
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
//        for the number of children we recursively call treeinput()
//        that returns the root/pointer therefore storing it in the current roots children
        root->children.push_back(treeinput());
    }
//    returning the pointer for the current node acting as root
    return root;
}

//printing the tree recursively, prints in linear way as parent: child1,child2 .....
void printtree(treenode<int>* root)
{
    //there is no base case as the leaf nodes act as implicit base case
//    they automatically stop calling further as the second loop is not run
    
    //what if the root is a nullptr therefore we put
    if(root==nullptr)
        return;
    
    cout<<root->data<<": ";
    for(auto x:root->children)
        cout<<x->data<<", ";
    cout<<endl;
    for(auto x: root->children)
        printtree(x);
}

int main()
{
    /*
    treenode<int>* root=new treenode<int>(1);
    treenode<int>* node1=new treenode<int>(2);
    treenode<int>* node2=new treenode<int>(3);
    
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    
//    storing the root node for the tree in root pointer which is returned by takeinput()  fn.
    
    treenode<int>* root=treeinputlevelwise();
    printtreelevelwise(root);
    
    return 0;
}
