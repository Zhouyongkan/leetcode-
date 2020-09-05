class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		int i = 0;
		while (nums[i] != i){
			if (nums[i] == nums[nums[i]]){
				return nums[i];
			}
			swap(nums[i], nums[nums[i]]);
		}
		return 0;
	}
};