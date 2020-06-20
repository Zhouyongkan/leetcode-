#include<iostream>

using namespace std;

int get_count(int mon)
{
	
	if (mon < 3)
	{
		return 1;
	}
	else
	{
		return get_count(mon - 1) + get_count(mon - 2);
	}
}

int main()
{
	int month;
	while (cin >> month)
	{
		int count = get_count(month);
		cout << count << endl;
	}
	return 0;
}

//有一只兔子，从出生后第三个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子，假如兔子都不死，问每个月的兔子总数为.