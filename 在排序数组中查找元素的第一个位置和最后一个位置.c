int res[2];
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
	res[0] = -1;
	res[1] = -1;

	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == target)
		{
			if (res[0] == -1)
			{
				res[0] = i;
			}
			res[1] = i;
		}

		if ((nums[i] != target) && (res[1] != -1))
		{
			break;
		}
	}
	*returnSize = 2;
	return res;
}