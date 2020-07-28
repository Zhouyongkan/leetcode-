#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	string a, b;
	while (getline(cin, a) && getline(cin, b))
	{
		if (b.size() == 0)
		{
			for (int i = 0; i<a.size(); ++i)
			{
				cout << a[i];
			}
			cout << endl;
		}
		string c;
		for (int i = 0; i<a.size(); ++i)
		{
			int flag = 1;
			for (int j = 0; j<b.size(); ++j)
			{
				if (a[i] == b[j])
				{
					flag = 0;
				}
			}
			if (flag)
			{
				c.push_back(a[i]);
			}
		}
		for (int i = 0; i<c.size(); ++i)
		{
			cout << c[i];
		}
		cout << endl;
	}
	return 0;
}