#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print elements of a list
 * @p: Point to beg  list.
 * Return: count  of nodes
 */

size_t print_list(const list_t *p)
{
	size_t c = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);

		c++;
		p = p->next;
	}
	return (c);
}
