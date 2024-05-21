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
    TreeNode* rec(int s,int e,vector<int>&v){
        if(s>e)
        return NULL;
        int mid=s+(e-s)/2;
        TreeNode*root=new TreeNode(v[mid]);
        root->left=rec(s,mid-1,v);
        root->right=rec(mid+1,e,v);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return rec(0,n-1,nums);
    }
};