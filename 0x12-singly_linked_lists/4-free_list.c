#include "lists.h"

void free_list(list_t *head)
{
    list_t *ptr;
    ptr = head;
    while (ptr)
    {
        free(ptr->str);
        free(ptr);
        head = head->next;
        ptr = head;
    }
}
