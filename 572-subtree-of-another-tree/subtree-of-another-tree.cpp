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
    bool fun(TreeNode* root, TreeNode* subRoot){
        if(root&&subRoot){
            if(root->val==subRoot->val&&fun(root->left,subRoot->left)&&fun(root->right,subRoot->right))
            return true;
            return false;
        }
        else if(root==NULL&&subRoot==NULL)return true;
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL&&subRoot==NULL)return true;
        else if(root==NULL)return false;
        return fun(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};