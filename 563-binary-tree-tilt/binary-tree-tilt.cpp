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
    int ans=0;
    int fun(TreeNode*root){
        if(root==NULL)return 0;
        int l=fun(root->left);
        int r=fun(root->right);
        ans+=abs(r-l);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        fun(root);
        return ans;
    }
};