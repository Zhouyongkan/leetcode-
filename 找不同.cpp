char findTheDifference(char * s, char * t){
	int len = strlen(s);
	int i = 0;
	int s1[26] = { 0 };
	int t1[26] = { 0 };
	for (i = 0; i<len; i++)
	{
		s1[s[i] - 'a']++;
		t1[t[i] - 'a']++;
	}
	t1[t[i] - 'a']++;

	for (i = 0; i<26; i++)
	{
		if (s1[i] != t1[i])
			return i + 'a';
	}
	return NULL;
}