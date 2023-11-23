#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    unsigned int current_index = 0;

    while (head != NULL) {
        if (current_index == index) {
            return head;
        }
        head = head->next;
        current_index++;
    }

    return NULL; // Node not found
}
