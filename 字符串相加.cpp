class Solution {
public:
	string addstrings(string num1, string num2)
	{
		int end1 = num1.size() - 1;
		int end2 = num2.size() - 1;
		int value1 = 0, value2 = 0, next = 0;
		string addret;
		while (end1 >= 0 || end2 >= 0)
		{
			if (end1 >= 0)
				value1 = num1[end1--] - '0';
			else
				value1 = 0;
			if (end2 >= 0)
				value2 = num2[end2--] - '0';
			else
				value2 = 0;
			int valueret = value1 + value2 + next;
			if (valueret > 9)
			{
				next = 1;
				valueret -= 10;
			}
			else
			{
				next = 0;
			}
			addret += (valueret + '0');
		}
		if (next == 1)
		{
			addret += '1';
		}
		reverse(addret.begin(), addret.end());
		return addret;
	}
};