#include<iostream>
#include<math.h>
using namespace std;




int main()
{
	int n;
	while (cin >> n)
	{
		cout << n << " = ";
		int i = 2;
		while (n>1)
		{
			if (n % i == 0)
			{
				if (i == n)
				{
					cout << i << endl;
				}
				else
				{
					cout << i << " * ";
				}
				n /= i;
				i = 2;
			}
			else
				++i;
		}
	}
	return 0;
}