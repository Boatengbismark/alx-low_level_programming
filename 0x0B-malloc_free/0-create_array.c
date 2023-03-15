#include <stdlib.h>

/**
 * create_array - create array and initialize with a character
 * @size: the number of size to initialize with
 * @c: character to initialize with the array
 * Return: the initialize array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c

			return (array);
	}
