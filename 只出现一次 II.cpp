class Solution {
public:
	int singleNumber(vector<int>& nums) {
		//1.ͳ��nums��������32λ��1�ĸ���
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

		//�ҳ����մ���Ϊ3x+1��λ�������ֻ����һ�ε���Ϊ1 ��λ
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