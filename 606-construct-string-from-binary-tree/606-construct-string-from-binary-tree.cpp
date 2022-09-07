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
// class Solution {
// public:
    
//     void preorder(TreeNode* root, vector<int>&v, string s){
//         if(root==NULL){
//             return;
//         }
//         s+="(";
//         s+=(char)root->val;
//         v.push_back(root->val);
//         if(root->left == NULL) s+="()";
//             preorder(root->left,v,s);
//         if(root->right == NULL) preorder(root->right,v,s);
        
//     }
    
//     string tree2str(TreeNode* root) {
//         vector<int> v;
//         string s;
//         preorder(root,v,s);
//     }
// };

class Solution {
public:
    string tree2str(TreeNode* root) {
		string ans = to_string(root->val);
		if (root->left) //left side check
			ans += "(" + tree2str(root->left) + ")";
		if (root->right) { //right side check
			if (!root->left) ans += "()"; //left side not present, but right side present
			ans += "(" + tree2str(root->right) + ")"; 
		}
		return ans;
	}
};