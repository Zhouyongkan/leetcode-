#include<iostream>

#include<math.h>
using namespace std;




int main()
{
	int n = 0;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		else
		{
			cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) + n - 4 << endl;
		}

	}

	return 0;
}


