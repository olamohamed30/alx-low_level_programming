#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
