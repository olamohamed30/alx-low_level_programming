#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end- it is a singly linked list
 * @head: int
 * @n: num
 * Return: count of  node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *t;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
	}
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = newn;
	}

	return (newn);
}
