#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int n;
	scanf("%d%d", &a,&n);
	int i = 0;
	int Sn = 0;
	int tem = 0;
	for (i = 0; i < n; i++)
	{
		tem = tem * 10 + 2;
		Sn += tem;
	}
	printf("%d\n", Sn);
	return 0;
}