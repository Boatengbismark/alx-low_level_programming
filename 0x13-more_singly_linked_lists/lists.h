#ifndef LIST_H
#define LIST_H

/*
 * Desc: Header file containing linked list function prototypes
 *
 */

#include <stdlib.h>

/**
 * struct nodes - singly linked list
 * @n: integer variable
 * @link: point to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct nodes
{
	int n;
	struct nodes *link;
} listint_t;

size print_listint(const listint_t *h);

#endif
