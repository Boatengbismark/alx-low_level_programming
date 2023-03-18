#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value of the arry
 * @max: last value of the array
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *p, m, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		p[m] = min++;

	return (p);
}
