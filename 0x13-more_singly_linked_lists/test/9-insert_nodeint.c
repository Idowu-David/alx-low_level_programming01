#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int node_len;
    unsigned int i;
    listint_t *ptr, *new;

    ptr = *head;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return NULL;
    node_len = listint_len(*head);
    if (idx > (node_len - 1))
        return NULL;
    
    for (i = 1; i < idx; i++)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
    new->n = n;
    ptr = ptr->next->next;
    new->next = ptr;
    return new;
}