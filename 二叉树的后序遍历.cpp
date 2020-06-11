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
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> st;
		TreeNode* cur = root;
		TreeNode* visited = NULL;
		vector<int> v;
		while (cur || !st.empty())
		{
			while (cur)
			{
				st.push(cur);
				cur = cur->left;
			}

			TreeNode* top = st.top();
			if (top->right == NULL || top->right == visited)
			{
				v.push_back(top->val);
				st.pop();

				visited = top;
			}
			else
			{
				cur = top->right;
			}
		}
		return v;
	}
};