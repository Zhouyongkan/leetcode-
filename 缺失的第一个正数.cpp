class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int n = nums.size();
		int i = 0;
		for (; i<n; ++i)
		{
			if (nums[i] >= 1)
			{
				break;
			}
		}
		int flag = 1;
		for (int j = i; j<n;)
		{
			if (flag != nums[j])
			{
				break;
			}
			while (j<n && nums[j] == flag)
			{
				++j;
			}
			flag++;
		}
		return flag;
	}
};