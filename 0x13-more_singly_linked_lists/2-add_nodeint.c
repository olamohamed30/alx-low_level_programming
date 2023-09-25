#include "lists.h"
/**
 * add_nodeint- it is a singly linked list
 * @head: int
 * @n: num
 * Return: count of  node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}
