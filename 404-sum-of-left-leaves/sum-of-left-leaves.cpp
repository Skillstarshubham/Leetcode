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
    int sum=0;
    void fun(TreeNode*root,bool lt){
        if(!root)return;
        if(lt&&!root->left&&!root->right)sum+=root->val; 
        fun(root->left,true);
        fun(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        fun(root,false);
        return sum;
    }
};