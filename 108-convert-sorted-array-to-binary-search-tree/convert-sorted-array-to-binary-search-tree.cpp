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
    TreeNode* fun(vector<int>nums,int i,int j){
        if(i>j)return NULL;
        int mid=i+(j-i)/2;
        TreeNode* temp=new TreeNode(nums[mid]);
        if(i==j){
            return temp;
        }
        temp->left=fun(nums,i,mid-1);
        temp->right=fun(nums,mid+1,j);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)return NULL;
        return fun(nums,0,nums.size()-1);
    }
};