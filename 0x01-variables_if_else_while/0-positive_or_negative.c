#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * description : print if a number is negetive or positive.
 * return: 0
 */

int main(void)
{
	int n;

	srand((time));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n"n);
	}
	else if (n < 0)
	{
		printf("%d is negetive\n"N);
	}
	else
	{
		printf("%d is zero\n"n);
	}
	return (0);
}
