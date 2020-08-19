class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 1)
		{
			return nums[0];
		}
		int max = nums[0];
		for (int i = 0; i<nums.size(); ++i)
		{
			if (nums[i]>max)
			{
				max = nums[i];
			}
		}
		int sum = 0;
		for (int i = 0; i<nums.size() - 1; ++i)
		{
			sum = nums[i];
			for (int j = i + 1; j<nums.size(); ++j)
			{
				sum = sum + nums[j];
				if (sum>max)
				{
					max = sum;
				}
			}
		}
		return max;
	}
};