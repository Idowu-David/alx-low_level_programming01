#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t *ptr;

    ptr = *head;

    while(ptr)
    {
        *head = ptr->next;
        free(ptr);
        ptr = *head;
    }
    *head = NULL;
}