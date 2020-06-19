#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string n1;
	string n2;
	while (cin >> n1 >> n2)
	{
		string sum;
		int end1 = n1.size() - 1;
		int end2 = n2.size() - 1;
		int val1 = 0;
		int val2 = 0;
		int next = 0;
		while (end1 >= 0 || end2 >= 0)
		{
			if (end1 >= 0)
			{
				val1 = n1[end1] - '0';
				end1--;
			}
			else
				val1 = 0;
			if (end2 >= 0)
			{
				val2 = n2[end2] - '0';
				end2--;
			}
			else
				val2 = 0;

			int ret = val1 + val2 + next;
			if (ret > 9)
			{
				next = 1;
				ret -= 10;
			}
			else
				next = 0;
			
			sum += ret + '0';
		}
		if (next == 1)
		{
			sum += '1';
		}
		reverse(sum.begin(), sum.end());
		for (int i = 0; i < sum.size(); ++i)
		{
			cout << sum[i];
		}
		cout << endl;
	}
	return 0;
}