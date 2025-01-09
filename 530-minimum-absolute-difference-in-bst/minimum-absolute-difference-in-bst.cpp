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
    vector<int>arr;
    void fun(TreeNode*root){
        if(!root)return;
        arr.push_back(root->val);
        fun(root->left);
        fun(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        fun(root);
        int ans=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
                ans=min(ans,abs(arr[i]-arr[i+1]));
        }
        return ans;
    }
};