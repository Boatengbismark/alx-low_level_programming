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

	for (i = alp[26]; i >= alp[0]; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
