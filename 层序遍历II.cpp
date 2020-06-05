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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> vv;

		queue<TreeNode*> q;
		if (root)
			q.push(root);

		while (!q.empty())
		{
			vector<int> v;
			// 队列中的结点个数是每一层的个数,第一次是第一层的，只有一个
			int level = q.size();

			// 将当前层的数据都出来，放到v中，再将下一层的都入到队列中
			for (size_t i = 0; i < level; ++i)
			{
				TreeNode* front = q.front();
				q.pop();
				v.push_back(front->val);
				if (front->left)
					q.push(front->left);

				if (front->right)
					q.push(front->right);
			}

			vv.push_back(v);
		}
		reverse(vv.begin(), vv.end());
		return vv;
	}
};