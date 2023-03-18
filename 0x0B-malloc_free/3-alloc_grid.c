#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a pointer to a 2 dimensional array of integers
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width <= 0 || height <= 0)

		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)

		return (NULL);

	for (a = 0; a < height; a++)

	{
		array[a] = malloc(sizeof(int) * width);

		if (array[a] == NULL)
		{
			for (; a >= 0; a--)
				free(array[a]);

			free(array);

			return (NULL);
		}
	}

	for (a = 0; a < height; a++)

	{
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}
