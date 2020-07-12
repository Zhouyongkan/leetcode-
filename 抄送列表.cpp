#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string n;
	string x;
	while (getline(cin, n))
	{
		getline(cin, x);
		int flow = 0;
		for (int i = 0; i<n.size(); ++i)
		{
			string a;
			if (n[i] == '"')
			{
				++i;
				while (i<n.size() && n[i] != '"')
				{
					a += n[i];
					++i;
				}
				if (a == x)
				{
					flow = 1;
					break;
				}
			}
			else if (n[i] != ',')
			{
				while (i<n.size() && n[i] != ',')
				{
					a += n[i];
					++i;
				}
				if (a == x)
				{
					flow = 1;
					break;
				}
			}
		}
		if (flow == 1)
		{
			cout << "Ignore" << endl;
		}
		else
		{
			cout << "Important!" << endl;
		}

	}
	cout << endl;
	return 0;
}



