int strStr(char * haystack, char * needle){
	if (needle == NULL || haystack == NULL)
	{
		return 0;
	}
	int len1 = strlen(haystack);
	int len2 = strlen(needle);
	for (int i = 0; i <= len1 - len2; i++)
	{
		if (strncmp(haystack + i, needle, len2) == 0)
		{
			return i;
		}
	}
	return -1;
}