#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		set<string> arr;
		string temp;
		for (int i = 0; i<n; ++i)
		{
			cin >> temp;
			arr.insert(temp);
		}
		for (auto it = arr.begin(); it != --arr.end(); ++it)
		{
			auto j = it++;
			auto pos = (*it).find((*j));
			if ((pos == string::npos) || (pos != 0) || (*it)[(*j).size()] != '\/')
				cout << "mkdir -p " << *j << endl;
			it = j;
		}
		cout << "mkdir -p " << *(--arr.end()) << endl;
		cout << endl;
	}

	return 0;
}