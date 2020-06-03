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
	string tree2str(TreeNode* t) {
		string str;
		if (t == nullptr)
		{
			return str;
		}
		str += to_string(t->val);
		if (t->left != nullptr)
		{
			str += '(';
			str += tree2str(t->left);
			str += ')';
		}
		if (t->right != nullptr)
		{
			if (t->left == nullptr)
				str += "()";

			str += '(';
			str += tree2str(t->right);
			str += ')';
		}
		return str;
	}
};