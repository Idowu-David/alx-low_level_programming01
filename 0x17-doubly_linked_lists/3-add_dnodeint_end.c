#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a dlistint_t
 * @head: pointer to the first node
 * @n: element of the new node
 * Return: address of the new node or NULL if it fails.
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
	if(ptr == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
