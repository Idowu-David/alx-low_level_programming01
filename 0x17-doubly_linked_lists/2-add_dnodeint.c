#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node of the linked list
 * @n: element of the node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (ptr == NULL)
	{
		new->next = NULL;
		(*head) = new;
		return (*head);
	}
	new->next = ptr;
	ptr->prev = new;
	(*head) = new;
	return (*head);
}
