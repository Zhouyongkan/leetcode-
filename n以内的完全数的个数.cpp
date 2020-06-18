#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		int count = 0;
		for (int i = 1; i < n; ++i)
		{
			for (int j = 1; j < i; ++j)
			{
				if (i%j == 0)
				{
					sum += j;
				}
			}
			if (i == sum)
			{
				count++;
			}
			sum = 0;
		}
	}
	return 0;
}