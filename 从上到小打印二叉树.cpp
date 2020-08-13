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
	vector<int> levelOrder(TreeNode* root) {
		vector<int> ret;
		if (root == NULL)
			return ret;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty())
		{
			TreeNode* t = q.front();
			q.pop();
			ret.push_back(t->val);
			if (t->left != NULL)
			{
				q.push(t->left);
			}
			if (t->right != NULL)
			{
				q.push(t->right);
			}
		}
		return ret;
	}
};