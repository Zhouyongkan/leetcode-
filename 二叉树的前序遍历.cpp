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
	vector<int> preorderTraversal(TreeNode* root) {
		stack<TreeNode*> st;
		TreeNode* cur = root;
		vector<int> v;
		while (cur || !st.empty())
		{
			while (cur)
			{
				v.push_back(cur->val);
				st.push(cur);
				cur = cur->left;
			}

			TreeNode* top = st.top();
			st.pop();
			cur = top->right;
		}
		return v;
	}
};