class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		//所有数进行异或
		int val = 0;
		for (auto& e : nums)
		{
			val ^= e;
		}
		//找到val32个位中哪个位为1
		size_t i = 0;
		for (; i<32; ++i)
		{
			if (val & (1 << i))
			{
				break;
			}
		}
		//分组
		int n1 = 0, n2 = 0;
		for (auto& e : nums)
		{
			if (e & (1 << i))
			{
				n1 ^= e;
			}
			else
			{
				n2 ^= e;
			}
		}
		vector<int> ret;
		ret.push_back(n1);
		ret.push_back(n2);
		return ret;
	}
};