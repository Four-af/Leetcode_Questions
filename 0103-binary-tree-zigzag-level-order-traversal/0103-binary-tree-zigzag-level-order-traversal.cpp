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
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){return ans;}
        bool chk=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            int l=q.size();
            for(int i=0; i<l; i++){
                TreeNode* rt=q.front();
                q.pop();
                if(rt->left!=NULL){q.push(rt->left);}
                if(rt->right!=NULL){q.push(rt->right);}
                v.push_back(rt->val);
            }
            if(!chk){reverse(v.begin(), v.end());}
            ans.push_back(v);
            chk=!chk;
        }
        return ans;
    }
};