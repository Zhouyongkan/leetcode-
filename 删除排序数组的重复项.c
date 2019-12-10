int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize <= 1){
		return numsSize;
	}
	int cur = 0;
	int next = 1;
	for (next = 1; next<numsSize; ++next)
	{
		if (nums[cur] != nums[next])
		{
			nums[++cur] = nums[next];
		}
	}
	return ++cur;
}