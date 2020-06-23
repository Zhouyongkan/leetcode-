#include<iostream>
using namespace std;

int get_count(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}

	return get_count(n - 2) + 1;
}

int main()
{
	int num;
	while (cin >> num)
	{
		cout << get_count(num) << endl;
	}
	return 0;
}