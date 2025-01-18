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
    long long smallest=LLONG_MAX;
    long long ans=LLONG_MAX;
    void fun(TreeNode*root){
        if(!root)return;
        if(root->val<smallest){
            ans=smallest;
            smallest=root->val;
        }
        else if(root->val>smallest&&root->val<ans){
            ans=root->val;
        }
        fun(root->left);
        fun(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        fun(root);
        return ans==LLONG_MAX?-1:ans;
    }
};