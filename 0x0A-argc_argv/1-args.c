#include <stdio.h>
#include <stdlib.h>


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
		sum ++;
	}

	printf("%d\n", sum - 1);
}
