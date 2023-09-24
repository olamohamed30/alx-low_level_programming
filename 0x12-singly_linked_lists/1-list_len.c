#include "lists.h"

/**
 * list_len - Count the num of elements in  list.
 * @p: Point to beg list.
 * Return: count elem in list.
 */
size_t list_len(const list_t *p)
{
	size_t c = 0;

	while (p != NULL)
	{
		p = p->next;
		c++;
	}

	return (c);
}
