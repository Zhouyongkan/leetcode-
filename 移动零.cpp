class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int count = 0;
		vector<int> num;
		int size = nums.size();
		for (int i = 0; i<size; ++i)
		{
			if (nums[i] != 0)
			{
				num.push_back(nums[i]);
			}
			else
			{
				count++;
			}
		}
		while (count--)
		{
			num.push_back(0);
		}
		nums = num;
	}
};