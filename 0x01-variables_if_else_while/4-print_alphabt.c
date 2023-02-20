#include <stdio.h>

/**
 * main - entry point
 * description: prints alphabets in lowercase then uppercase
 * Return: 0
 */

int main(void)
{
	char lwalp[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
		putchar(lwalp[i]);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
