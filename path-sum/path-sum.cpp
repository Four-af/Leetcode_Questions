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

	void dfs(TreeNode* curr,int target,int sum,bool &flag){
		if(curr==NULL)return;
		if(curr!=NULL && !curr->left && !curr->right){ //leaf Node reached
			sum+=curr->val;
			if(sum==target)flag=true;
			return;
		}
		sum+=curr->val;
		dfs(curr->left,target,sum,flag);
		dfs(curr->right,target,sum,flag);       
	}

	bool hasPathSum(TreeNode* curr, int t) {
		if(!curr && !t) return false; 
		bool flag=false;
		dfs(curr,t,0,flag);
		return flag;
	}
};