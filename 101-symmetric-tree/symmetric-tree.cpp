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
    bool fun(TreeNode*r,TreeNode*l){
        if(!r&&!l)return true;
        if(!r||!l)return false;
        return r->val==l->val&&fun(r->left,l->right)&&fun(l->left,r->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return fun(root->left,root->right);
    }
};