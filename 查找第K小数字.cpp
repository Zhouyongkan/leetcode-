#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int a[1000] = { 0 };
		for (int i = 0; i<n; i++){
			cin >> a[i];
		}
		int k;
		cin >> k;
		sort(a, a + n);
		int count = 1;

		int j = 0;
		while (count != k)
		{
			if (a[j] != a[j + 1])
			{
				count++;
			}
			++j;
		}
		cout << a[j] << endl;
	}

	return 0;
}

