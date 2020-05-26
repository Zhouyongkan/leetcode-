/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
	if (!nums1Size || !nums1Size)
	{
		*returnSize = 0;
		return 0;
	}
	int nsize = 0;
	if (nums1Size>nums2Size)
	{
		nsize = nums2Size;
	}
	else
	{
		nsize = nums1Size;
	}
	int count = 0;
	int *nums3 = (int *)malloc(sizeof(int)*nsize);
	for (int i = 0; i<nums1Size; ++i)
	{
		for (int j = 0; j<nums2Size; ++j)
		{
			int flag = 0;
			if (nums1[i] == nums2[j])
			{
				for (int k = 0; k<nsize; k++)
				{
					if (nums3[k] == nums1[i])
					{
						flag = 1;
					}
				}
				if (flag != 1)
				{
					nums3[count++] = nums1[i];
				}
			}
		}
	}
	*returnSize = count;
	return nums3;
}