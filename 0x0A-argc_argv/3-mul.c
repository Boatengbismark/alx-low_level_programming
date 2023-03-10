#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
