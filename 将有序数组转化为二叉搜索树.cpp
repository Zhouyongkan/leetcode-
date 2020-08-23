/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:

	TreeNode* AVLtree(vector<int>& nums, int left, int right)
	{
		if (left > right)
			return NULL;

		int mid = (left + right + 1) / 2;

		TreeNode* root = new TreeNode(nums[mid]);

		root->left = AVLtree(nums, left, mid - 1);
		root->right = AVLtree(nums, mid + 1, right);
		return root;
	}


	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return AVLtree(nums, 0, nums.size() - 1);
	}

};