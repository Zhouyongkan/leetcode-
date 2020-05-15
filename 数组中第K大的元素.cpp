class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		priority_queue<int> topk;
		for (auto e : nums)
		{
			topk.push(e);
		}
		for (int i = 0; i<k - 1; i++)
		{
			topk.pop();
		}
		return topk.top();
	}
};