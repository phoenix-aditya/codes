#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

int ans=0;
int binarytoint(string binary){
    //cout<<binary<<endl;
    int ret=0;
    reverse(binary.begin(), binary.end());
    for(int i=0;i<binary.size();i++){
        if(binary[i]=='1')
            ret|=(1<<i);
    }
    return ret;
    
}
void func(TreeNode* root, string binary){
    if(root!=nullptr && root->left==nullptr && root->right==nullptr){
        if(root->val==1){
        binary+='1';
        }else{
           binary+='0';
        }
        ans+=binarytoint(binary);
       // cout<<ans<<endl;
        return;
    }
    if(root==nullptr)
        return;
    if(root->val==1){
        binary+='1';
    }else{
        binary+='0';
    }
    
    func(root->left, binary);
    func(root->right, binary);
}
int sumRootToLeaf(TreeNode* root) {
    string s="";
    func(root,s);
    return ans;
}





int main()
{
    speed;
    return 0;
}
