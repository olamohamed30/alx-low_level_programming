#include "lists.h"
#include <stdio.h>
/**
 * listint_len - it is a singly linked list
 * @h: int
 * Return: count of  node
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
