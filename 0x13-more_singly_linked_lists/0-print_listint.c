#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the element of the function.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t links = NULL;

	while (h)
	{
		links++;
		printf("%d\n", h->n);
		h = h->link;
	}

	return (links);
}
