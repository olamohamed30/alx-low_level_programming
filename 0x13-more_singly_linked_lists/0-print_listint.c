#include "lists.h"
#include <stdio.h>
/**
 * print_listint - it is a singly linked list
 * @h: int
 * Return: count of  node
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
