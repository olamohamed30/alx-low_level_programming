#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return add_dnodeint(h, n);

    while (temp != NULL && i < idx) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL && i == idx) {
        return add_dnodeint_end(h, n);
    } else if (temp != NULL) {
        new_node = malloc(sizeof(dlistint_t));
        if (new_node == NULL)
            return NULL;
        new_node->n = n;
        new_node->next = temp;
        new_node->prev = temp->prev;
        temp->prev->next = new_node;
        temp->prev = new_node;
        return new_node;
    }
    return NULL;
}
