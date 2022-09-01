#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the first node of the linked list
 * @n: data contained in the node
 * 
 * Return: the address of the new element, or NULL, if it failed 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
    new->n = n;
    new->next = NULL;
    new->prev = NULL;
    if (ptr == NULL)
        *head = new;
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new;
        new->prev = ptr;
    }
    return (new);
}
