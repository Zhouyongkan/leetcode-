#include<iostream>
#include<string>
using namespace std;

int get_remainder(int n)
{
	int rem = 0;
	int num = 0;
	while (n != 0)
	{
		num = n % 10;
		n = n / 10;
		rem += num;
	}
	if (rem <= 9)
	{
		return rem;
	}
	else
	{
		return get_remainder(rem);
	}
}


int main()
{
	string n;
	while (cin >> n)
	{
		int num = 0;
		for (int i = 0; i<n.size(); ++i)
		{
			num += n[i] - '0';
		}
		cout << get_remainder(num) << endl;
	}
	return 0;
}