#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer variable
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;
i
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i == 1)
		_putchar('\n');
}
