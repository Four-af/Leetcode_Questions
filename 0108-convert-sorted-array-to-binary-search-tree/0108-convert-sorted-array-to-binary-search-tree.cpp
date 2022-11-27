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
    
    TreeNode* func(vector<int>& nums, int left, int right){
        if(left>right) return NULL;
        int mid = (left+right)/2;
        TreeNode* ptr = new TreeNode(nums[mid]);
        ptr->left = func(nums,left,mid-1);
        ptr->right = func(nums,mid+1,right);
        return ptr;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return func(nums,0,nums.size()-1);
    }
};