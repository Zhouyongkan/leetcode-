
#include<iostream>
#include<stdio.h>
int new_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + new_strlen(string);
	}
	return count;
}

int main()
{
	char *str = "abcdefgh";
	printf("%d\n", new_strlen(str));
	return 0;
}
