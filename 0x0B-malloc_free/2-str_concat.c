#include <stdlib.h>

/**
 * str_concat - return a pointer to the concatenated string
 * @s1: the string to be concatenate upon
 * @s2: the string to s1
 * Return: the concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)

		return (NULL);

	len1 = len2 = 0;

	while (s1[len1] != '\0')

	{
		array[len1] = s1[len1];
		len1++;
	}

	while (s2[len2] != '\0')

	{
		array[len1] = s2[len2];
		len1++, len2++;
	}
	array[len1] = '\0';
	return (array);
}
