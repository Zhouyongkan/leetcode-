int fib(int N)
{
	if (N == 1 || N == 2)
	{
		return 1;
	}
	else
	{
		int f1 = 1;
		int f2 = 1;
		int f3 = 0;
		int i = 0;
		for (i = 3; i <= N; i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		return f3;
	}
}