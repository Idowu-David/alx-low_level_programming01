#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to first node of the linked list
 * @idx: index of the list where new node should be added, index starts at 0
 *
 * Return: the address of the new node, or NULL, if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_len;
	const int data = n;
	dlistint_t *ptr, *new, *ptr2;

	ptr = *h;
	node_len = dlistint_len(*h);
	if (idx > node_len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	
	/* to insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, data));
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2 = ptr->next;
	/* to insert at the end */
	if (ptr->next == NULL)
	{
		ptr->next = new;
		new->prev = ptr;
	}
	ptr->next = new;
	new->next = ptr2;
	ptr2->prev = new;
	new->prev = ptr;

	return (new);
}
