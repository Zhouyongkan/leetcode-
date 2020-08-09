class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> small;
		vector<int> big;
		for (int i = 0; i<2 * n; ++i)
		{
			if (i<n)
			{
				small.push_back(nums[i]);
			}
			else
			{
				big.push_back(nums[i]);
			}
		}
		vector<int> sum;
		for (int j = 0; j<n; ++j)
		{
			sum.push_back(small[j]);
			sum.push_back(big[j]);
		}
		return sum;
	}
};