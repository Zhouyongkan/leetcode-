#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	printf("输入一个数字num：");
	scanf("%d", &num);
	printf("奇数序列为：");
	for (i = 31;i >=0; i-= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	printf("偶数序列为：");
	for (i =30; i>=0; i -= 2)
	{
		printf("%d", (num>> i) & 1);
	}
	return 0;
}