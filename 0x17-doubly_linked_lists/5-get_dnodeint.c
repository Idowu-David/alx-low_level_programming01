#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to pointer to the first node
 * @index: postion of the pointer to be returned
 * 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *ptr;

    ptr = head;
    while (index > 0)
    {
        ptr = ptr->next;
        index--;
    }
    return (ptr);
}