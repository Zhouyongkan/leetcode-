/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/
class Solution {
public:
	void _Convert(TreeNode* cur, TreeNode*& prev)
	{
		if (cur == NULL)
			return;
		_Convert(cur->left, prev);
		// 
		cur->left = prev;
		if (prev != NULL)
			prev->right = cur;

		prev = cur;
		_Convert(cur->right, prev);
	}
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		TreeNode* prev = NULL;
		_Convert(pRootOfTree, prev);
		TreeNode* head = pRootOfTree;
		while (head && head->left)
		{
			head = head->left;
		}
		return head;
	}
};