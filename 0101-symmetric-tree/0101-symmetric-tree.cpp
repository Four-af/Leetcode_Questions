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
    // bool ans;
    bool dfs(TreeNode* lf, TreeNode* rt){
        if(!lf && !rt) return true;
        if(!lf || !rt) return false;
        if(lf->val != rt->val) return false;
        return dfs(lf->left, rt->right) && dfs(lf->right, rt->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return dfs(root->left, root->right);
    }
};