/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
	int* a = (int *)malloc(sizeof(int)* 2);
	*returnSize = 0;
	for (int i = 0; i < numbersSize - 1; i++) {
		for (int j = i + 1; j < numbersSize; j++) {
			if (numbers[i] + numbers[j] == target) {
				a[0] = i + 1;
				a[1] = j + 1;
				*returnSize = 2;
				return a;
			}
		}
	}
	return a;
}