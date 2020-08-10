class Solution {
public:
	int countBinarySubstrings(string s) {
		int last = 0;
		int cur = 1;
		int count = 0;
		int n = s.size();
		for (int i = 1; i<n; ++i)
		{
			if (s[i] == s[i - 1])
			{
				cur++;
			}
			else
			{
				last = cur;
				cur = 1;
			}
			if (last >= cur)
			{
				count++;
			}
		}
		return count;
	}
};