#include "lists.h"

void free_listint(listint_t *head)
{
    listint_t *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        free(ptr);
        head = head->next;
        ptr = head;
    }
}