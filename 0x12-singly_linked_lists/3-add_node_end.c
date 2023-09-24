#include "lists.h"
#include <string.h>

#include <stdlib.h>

/**
 * add_node_end - Adds avhvhvhgfcjhnhb list.
 * @head: Doughhjgjt.
 * @str: String jhjhjhiu.
 * Return: Addreor Nhghjhtgffhd.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *t;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	if (newn->str == NULL)
	{
		free(newn);
		return (NULL);
	}
	newn->len = strlen(newn->str);
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}

	t->next = newn;

	return (newn);
}
