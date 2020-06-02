/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/


int maxDepth(struct TreeNode* root){
	if (root == 0)
	{
		return 0;
	}
	int hright = 1;
	int hleft = 1;
	if (root->left)
	{
		hleft += maxDepth(root->left);
	}
	if (root->right)
	{
		hright += maxDepth(root->right);
	}
	return hright>hleft ? hright : hleft;
}