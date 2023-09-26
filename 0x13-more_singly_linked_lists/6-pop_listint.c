#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - it is a singly linked list
 * @head: int
 * Return: count of  node
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int info;

	if (head == NULL || *head == NULL)
		return (0);

	t = *head;
	info = t->n;

	*head = (*head)->next;

	free(t);
	return (info);
}
