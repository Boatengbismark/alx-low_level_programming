#ifndef LIST_H
#define LIST_H

/*
 * Desc: Header file containing linked list function prototypes
 *
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer variable
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct nodes *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
