#include<iostream>

using namespace std;

int main()
{
	int n, sum = 0;
	int maxSum = -1;
	cin >> n;
	int a[n];
	for (int i = 0; i<n; ++i)
	{
		cin >> a[i];
		sum += a[i];
		if (sum>maxSum)
		{
			maxSum = sum;
		}
		if (sum<0)
		{
			sum = 0;
		}
	}
	cout << maxSum << endl;
	return 0;
}