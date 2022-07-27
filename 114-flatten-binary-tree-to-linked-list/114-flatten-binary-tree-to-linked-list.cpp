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
    //  TreeNode* preoder(TreeNode* root){
    //     if(!root) return;
    //     v.push_back(root);
    //     preoder(root->left);
    //     preoder(root->right);
    // }
    TreeNode* shiftToRight(TreeNode* root){
        if (root->right==NULL) return root;
        return shiftToRight(root->right);
    }
    
    void flatten(TreeNode* root) {
        if (root==NULL) return;
        TreeNode* nextRight;
        TreeNode* rightMost;
        
        while (root){
            
            if (root->left){
                rightMost = shiftToRight(root->left);
                nextRight = root->right;
                root->right = root->left;
                root->left=NULL;
                rightMost->right=nextRight;
            }
            root=root->right;
        }
    }
};
