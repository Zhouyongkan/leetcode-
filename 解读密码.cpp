#include<iostream>
#include<string>

using namespace std;

int main()
{
	string m;
	while (getline(cin, m))
	{
		for (int i = 0; i<m.size(); ++i)
		{
			if (m[i] <= '9' && m[i] >= '0')
			{
				cout << m[i];
			}
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}