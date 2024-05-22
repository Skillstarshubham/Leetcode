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
    void ch(TreeNode* r, int &c,int k){
        if(!r) return ;
        ch(r->left,c,k);
        c++;
        if(c==k){
            ans=r->val;
            return ;
        }
        ch(r->right,c,k);

    }
    int kthSmallest(TreeNode* r, int k) {
        int c=0;
        ch(r,c,k);
        return ans;
    }
};