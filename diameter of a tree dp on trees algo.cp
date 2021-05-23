#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>
 
//aditya ranaut- phoenix_aditya
struct node{
    int data;
    node* left;
    node* right;
};

int diameterofbinarytree(node* root, int& ans){
    if(root==nullptr)
        return 0;
    
    int left=diameterofbinarytree(root->left, ans);
    int right=diameterofbinarytree(root->right, ans);
    
    int temp=1+max(left, right);
    ans=max(ans, left+right+1);
    
    return temp;
}
void solve()
{
    // input and tree making
    node* root=new node;
    queue<node*> q;
    cout<<"enter root: ";
    int temp;
    cin>>temp;
    root->data=temp;
    q.push(root);
    while(!q.empty()){
        node* tt=q.front();
        q.pop();
        cout<<"enter left of "<<tt->data<<endl;
        cin>>temp;
        if(temp==-1)
            tt->left=nullptr;
        else{
            node* l=new node;
            l->data=temp;
            tt->left=l;
            q.push(l);
        }
        
        
        cout<<"enter right of "<<tt->data<<endl;
        cin>>temp;
        if(temp==-1)
            tt->right=nullptr;
        else{
            node* r=new node;
            r->data=temp;
            tt->right=r;
            q.push(r);
        }
    }
    
    int ans=0;
    ll z=diameterofbinarytree(root, ans);
    cout<<"diameter of tree is: "<<ans<<endl;
}
 
int main()
{
    speed;
    
    wh(t)
    solve();
    
    return 0;
}
