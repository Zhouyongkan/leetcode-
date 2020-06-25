#include<iostream>

#include<string>

using namespace std;




int main()
{
	string s;

	while (cin >> s)
	{
		int a[256] = { 0 };
		int n = s.size();
		for (int i = 0; i<n; ++i)
		{
			a[s[i]]++;
		}
		int j = 0;
		for (j = 0; j<n; ++j)
		{
			if (a[s[j]] == 1)
			{
				cout << s[j] << endl;
				break;
			}
		}
		if (j >= n)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}