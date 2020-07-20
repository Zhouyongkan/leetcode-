#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		long long arr[21] = { 0, 0, 1 };
		for (int i = 3; i<21; ++i)
		{
			arr[i] = (i - 1)*(arr[i - 1] + arr[i - 2]);
		}
		cout << arr[n] << endl;
	}

	return 0;
}
