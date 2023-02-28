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
    //serialize the tree
    //make small subtrees and make em as strings
    //we cant use in-order or pre-order traversal
    //we need to use post-order traversal to serialise them
    //refer : https://leetcode.com/problems/find-duplicate-subtrees/discuss/3238165/C%2B%2B-EASIEST-SOLUTION-WITH-COMPLETE-EXPLANATION-EASY-TO-UNDERSTAND
    //for better understanding
    
    string serializeSubtrees(TreeNode* node, unordered_map<string, int>&subtrees, vector<TreeNode*>& duplicates){
        if(!node) return "#";
        string left = serializeSubtrees(node->left, subtrees, duplicates);
        string right = serializeSubtrees(node->right, subtrees, duplicates);
        
        //serialising the current subtree
        // i cd ve used anything to separate each value
        string s  = left + "," + right + "," + to_string(node->val);
        
        //a duplicate tree is found
        //i was storing frequency of each subtree in a map
        //now if i find a value greater than 1 means it is getting repeated
        //so i put it in the vector of duplicates
        if(subtrees[s]==1) duplicates.push_back(node);
        // if(subtrees[s]>2){}
        subtrees[s]++;
        return s;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        // Store serialized subtree and its frequency
        unordered_map<string, int> subtrees;
        vector<TreeNode*> duplicates; // Store duplicate subtrees
        
        serializeSubtrees(root, subtrees, duplicates); // Traverse the tree and serialize subtrees
        // vector<TreeNode*> ans;
        // for(auto x : duplicates) ans.push_back(x);
        return duplicates;
    }
};