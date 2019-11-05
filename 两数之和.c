#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int* twosum(int* nums, int numsSize, int target, int* returnsize)
{
	int* a = returnsize;
	int i = 0;
	int j = 0;
	for (i = 0; i<numsSize - 1; i++)
	{
		for (j = i + 1; j<numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				a[0] = i;
				a[1] = j;
				return a;
			}
		}
	}
	return 0;
}
int main()
{
	int arr[4];
	printf("请输入4个数字:");
	int i = 0;
	for (i = 0; i<4; i++)
	{
		scanf("%d", &arr[i]);
	}
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请输入你想找的目标值：");
	int target = 0;
	scanf("%d", &target);
	int a[2] = { 0 };
	twosum(arr, len, target, a);
	for (int j = 0; j<2; j++)
	{
		printf("%d", a[j]);
	}
	return 0;
}
