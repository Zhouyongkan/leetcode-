class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int i = 0, j = 1;
		while (j<nums.size()){
			if (nums[i] == nums[j])
			{
				return nums[j];
			}
			else
				++i;
			++j;
		}
		return 0;
	}
};