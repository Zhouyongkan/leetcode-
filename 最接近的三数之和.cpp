class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		int n = nums.size();
		int min = abs(nums[0] + nums[1] + nums[2] - target);
		int sum1 = nums[0] + nums[1] + nums[2];
		for (int i = 0; i<n - 1; ++i)
		{
			for (int j = i + 1; j<n - 1; ++j)
			{
				for (int a = n - 1; a>j; --a)
				{
					int sum2 = abs(nums[i] + nums[j] + nums[a] - target);
					if (sum2<min)
					{
						min = sum2;
						sum1 = nums[i] + nums[j] + nums[a];
					}
				}
			}
		}
		return sum1;
	}
};
