#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removeElement(int* nums, int numsSize, int val)
{
	size_t src = 0, dst = 0;
	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[dst++] = nums[src++];
		}
		else
		{
			++src;
		}
	}
	return dst;
}