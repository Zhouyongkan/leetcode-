void reverseString(char* s, int sSize){
	if (sSize == 0 || sSize == 1)
	{
		s = s;
	}
	else
	{
		int left = 0;
		int right = sSize - 1;
		int temp = 0;
		for (; left<right; ++left, --right)
		{
			temp = s[left];
			s[left] = s[right];
			s[right] = temp;
		}
	}
}