#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Adds avhvhvhgfcjhnhb list.
 * @head: Doughhjgjt.
 * @str: String jhjhjhiu.
 * Return: Addreor Nhghjhtgffhd.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	if (newn->str == NULL)
	{
		free(newn);
		return (NULL);
	}
	newn->next = *head;
	*head = newn;
	return (newn);
}
