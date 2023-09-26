#include "lists.h"
#include <stdio.h>
/**
 * free_listint- it is a singly linked list
 * @head: int
 * Return: void nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
