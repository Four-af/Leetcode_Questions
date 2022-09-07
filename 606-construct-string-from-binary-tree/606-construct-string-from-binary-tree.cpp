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
    
    string preorder(TreeNode* root,string si){
        
        if(root==NULL){
            return si;
        }
        string s = to_string(root->val);
		if (root->left)
			s += "(" + preorder(root->left,s) + ")";
		if (root->right) {
			if (!root->left) s += "()";
			s += "(" + preorder(root->right,s) + ")"; 
		}
		return s;
    }
    
    string tree2str(TreeNode* root) {
        // vector<int> v;
        string s="";
        return preorder(root,s);
    
    }
};
