#define _CRT_SECURE_NO_WARNINGS
int reverse(int x)
{
	int max = 0x7fffffff;
	int min = 0x80000000;
	long tmp = 0;
	while (x != 0)
	{
		tmp = tmp * 10 + x % 10;
		x /= 10;
	}
	if (tmp>max || tmp<min)
	{
		return 0;
	}
	else
	{
		return (int)tmp;
	}
}
