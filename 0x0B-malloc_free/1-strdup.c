#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * @str: the string to be copy
 * Return: A the new allocated space
 */

char *_strdup(char *str)
{
	char *new_str;
	int length = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	new_str = malloc(sizeof(char) * length + 1);
	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
		new_str[length] = '\0';
	}

	return (new_str);
}
