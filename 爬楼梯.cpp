class Solution {
public:
	int climbStairs(int n) {
		vector<int> st(n + 1);
		st[0] = 1;
		st[1] = 2;
		for (int i = 2; i<n; ++i)
		{
			st[i] = st[i - 1] + st[i - 2];
		}
		return st[n - 1];
	}
};