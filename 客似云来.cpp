#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int from = 0;
	int to = 0;
	vector<long> v(81, 0);
	v[1] = 1;
	for (int i = 2; i<81; ++i)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
	while (cin >> from >> to)
	{
		long sum = 0;
		while (to >= from)
		{
			sum += v[to];
			to--;
		}
		cout << sum << endl;
	}
	return 0;
}