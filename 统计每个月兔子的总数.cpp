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

//��һֻ���ӣ��ӳ��������������ÿ���¶���һֻ���ӣ�С���ӳ����������º�ÿ��������һֻ���ӣ��������Ӷ���������ÿ���µ���������Ϊ.