#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n;
	while (getline(cin, n))
	{

		for (int i = 0; i<n.size(); ++i)
		{
			if (n[i] >= 'A' && n[i] <= 'E')
			{
				n[i] += 21;
			}
			else if (n[i] >= 'F' && n[i] <= 'Z')
			{
				n[i] -= 5;
			}
			else
				continue;
		}
		for (int j = 0; j<n.size(); ++j)
		{
			cout << n[j];
		}
		cout << endl;
	}

	return 0;
}
