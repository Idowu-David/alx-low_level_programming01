#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *ptr;
    int n;
    ptr = *head;

    *head = ptr->next;
    n  = ptr->n;
    free(ptr);
    return n;
}