int majorityElement(int* nums, int numsSize){
	int n = nums[0];
	int count = 0;
	for (size_t i = 0; i < numsSize; i++)
	{
		if (nums[i] == n)
			count++;
		else
			count--;
		if (count <= 0)
		{
			n = nums[i + 1];
		}
	}
	return n;
}