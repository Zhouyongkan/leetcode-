#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare_bit(int x, int y)
{
	int i = 0;
	int count = 0;
	x ^= y;
	for (i = 0; i < 32; i++)
	{
		if ((x >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a = 1999;
	int b = 2999;
	printf("%d和%d二进制bit位中有%d个比特位不同\n", a, b, compare_bit(a, b));
	return 0;
}
