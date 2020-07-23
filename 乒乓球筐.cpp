#include<iostream>
#include<string>

using namespace std;

int main()
{
	string A;
	string B;
	while (cin >> A >> B)
	{
		int j = 0;
		int i = 0;
		for (; i<B.size(); ++i)
		{
			int pos = A.find(B[i], j);
			if (pos<A.size())
			{
				A.erase(pos, 1);
			}
			else
			{
				cout << "No" << endl;
				break;
			}
		}
		if (i == B.size())
		{
			cout << "Yes" << endl;
		}

	}

	return 0;
}