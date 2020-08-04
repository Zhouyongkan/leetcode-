class Solution {
public:
	int lengthOfLongestSubstring(string s) { 
		int maxlen = 0, len = 0;
		int start = 0, end = 0;      

		while (end<s.length())
		{
			for (int i = start; i<end; i++)
			{
				if (s[i] == s[end])
				{
					if (len>maxlen) maxlen = len;  
					start = i + 1;
					len = end - start;
					break;
				}
			}
			len++;
			end++;
		}
		if (len>maxlen) maxlen = len;
		return maxlen;
	}
};
