#include <stdio.h>

/**
 * main - entry point
 * @argc: count the command line argurment
 * @argv: array of string
 * Return: always 0 to indicate success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
