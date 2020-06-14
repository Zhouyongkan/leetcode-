#include<iostream>
#include<math.h>

using namespace std;

bool is_num(int n)
{
	for (int i = 2; i < sqrt(n); ++i)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int num;
	while (cin >> num)
	{
		if (num % 2 != 0)
			break;
		int mid = num / 2;
		for (int i = mid; i > 0; --i)
		{
			if (is_num(i) && is_num(num - i))
			{
				cout << i << endl << num - i << endl;
				break;
			}
		}
	}
	return 0;
}