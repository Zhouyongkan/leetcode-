int lengthOfLastWord(char * s){
	int i = 0;
	int count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;
		}
		else
		{
			if ((count != 0) && (s[i - 1] == ' '))
			{
				count = 1;
			}
			else
			{
				count++;
			}
			i++;
		}
	}
	return count;
}