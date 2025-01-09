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
    map<int,int>mp;
    int maxi=0;
    void fun(TreeNode*root){
        if(!root)return;
        mp[root->val]++;
        maxi=max(maxi,mp[root->val]);
        fun(root->left);
        fun(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        fun(root);
        for(auto it:mp){
            if(it.second==maxi)
            ans.push_back(it.first);
        }
        return ans;
    }
};