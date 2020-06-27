class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		int max = 0;
		int count = 0;
		int maxn = 0;
		for (int i = 0; i<n; ++i)
		{
			for (int j = i + 1; j<n; ++j)
			{
				if (gifts[i] == gifts[j])
				{
					count++;
				}
			}
			if (count > max)
			{
				max = count;
				maxn = gifts[i];
				count = 0;
			}
		}
		int x = n / 2;
		if (max>x)
		{
			return maxn;
		}
		else
			return 0;

	}
};