#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count the command line argument
 * @argv: array of string to be count
 * Return: always 0 to indicate success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] == " ")
		{
			sum += 0;
		}
		else
		sum++;
	}
	printf("%d\n", sum - 1);
	return (0);
}
