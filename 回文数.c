
bool isPalindrome(int x)
{
	int n = x;
	long tmp = 0;
	if (x<0)
	{
		return false;
	}
	while (x != 0)
	{
		tmp = tmp * 10 + x % 10;
		x = x / 10;
	}
	if (tmp == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}