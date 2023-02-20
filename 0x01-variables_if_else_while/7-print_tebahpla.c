#include <stdio.h>

/**
 * main - entry point
 * Description: printing the alphabet in reverse order.
 * Return: 0
 */

int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i >= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);

}
