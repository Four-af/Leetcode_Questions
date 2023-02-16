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
    void depth(TreeNode* root, int d){
        if(!root) return;
        if(!root->right && !root->left)
            ans = max(ans,d);
        depth(root->left, d+1);
        depth(root->right, d+1);
    }
    int maxDepth(TreeNode* root) {
        depth(root, 1);
        return ans;
    }
};