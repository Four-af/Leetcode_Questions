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
    
    int answer=0;
    void maximum_depth(TreeNode* root, int depth) {
        if (!root) {
            return;
        }
        if (!root->left && !root->right) {
            answer = max(answer, depth);
        }
        maximum_depth(root->left, depth + 1);
        maximum_depth(root->right, depth + 1);
    }
    int maxDepth(TreeNode* root) {
        maximum_depth(root,1);
        return answer;
    }
};

