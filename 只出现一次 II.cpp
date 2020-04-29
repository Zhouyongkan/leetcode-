class Solution {
public:
	int singleNumber(vector<int>& nums) {
		//1.统计nums中所有数32位中1的个数
		int bitsArray[32] = { 0 };
		for (auto e : nums)
		{
			for (size_t i = 0; i<32; ++i)
			{
				if (e & (1 << i))
				{
					bitsArray[i]++;
				}
			}
		}

		//找出出险次数为3x+1的位，这就是只出现一次的数为1 的位
		int num = 0;
		for (size_t i = 0; i<32; i++)
		{
			if (bitsArray[i] % 3 == 1)
			{
				num |= (1 << i);
			}
		}
		return num;
	}
};