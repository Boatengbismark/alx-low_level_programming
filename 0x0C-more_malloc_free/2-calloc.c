#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *a;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	a = p;

	for (len = 0; len < (size * nmemb); len++)
		a[len] = '\0';

	return (p);
}
