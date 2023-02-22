#include "main.h"

/**
 * main - entry point
 * description: printing _putchar
 * Return: 0
 */

int main(void)
{
	char ch[] = "_putchar\n";
	int k;

	for (k = 0; k <= 8; k++)
	{
		_putchar(ch[k]);
	}
	return (0);
}
