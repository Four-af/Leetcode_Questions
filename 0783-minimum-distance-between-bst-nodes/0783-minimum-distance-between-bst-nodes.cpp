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
    vector<int> ans;
    
    void dfs(TreeNode* root){
        if(!root) return;
        ans.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        dfs(root);
        sort(ans.begin(), ans.end());
        int res = INT_MAX;
        for(int i=0; i<ans.size()-1; i++){
            res = min(res, ans[i+1]-ans[i]);
        }
        return res;
    }
};