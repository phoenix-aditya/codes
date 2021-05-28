/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=INT_MIN;
    
    int findsum(TreeNode* root){
        if(root==nullptr)
            return 0;
        int left=findsum(root->left)+root->val;
        int right=findsum(root->right)+root->val;
        ans=max(ans,(left+right-root->val));
        ans=max(ans, left);
        ans=max(ans, right);
        ans=max(ans, root->val);
        
        return max(max(left,right), root->val);
        
    }
    int maxPathSum(TreeNode* root) {
        findsum(root);
        return ans;
    }
};
