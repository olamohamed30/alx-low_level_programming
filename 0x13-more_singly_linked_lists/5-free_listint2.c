#include "lists.h"
#include <stdio.h>
/**
 * free_listint2- it is a singly linked list
 * @head: int
 * Return: void nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
