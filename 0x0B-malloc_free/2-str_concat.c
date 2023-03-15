#include <stdlib.h>

/**
 * str_concat - return a pointer to the concatenated string
 * @s1: the string to be concatenate upon
 * @s2: the string to s1
 * Return: the concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int len1, len2, i, j, length;

	if (s1 == NULL || s2 == NULL)
		return ("");

	while (*s1 != '\0')
		len1++;
	while (*s2 != '\0')
		len2++;
       	length = len1 + len2 + 1;

	arr = malloc(sizeof(char) * length);
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		arr[i + j] = s2[j];
		arr[length] = '\0';
	}

	return (arr);
}
