class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		//�������������
		int val = 0;
		for (auto& e : nums)
		{
			val ^= e;
		}
		//�ҵ�val32��λ���ĸ�λΪ1
		size_t i = 0;
		for (; i<32; ++i)
		{
			if (val & (1 << i))
			{
				break;
			}
		}
		//����
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