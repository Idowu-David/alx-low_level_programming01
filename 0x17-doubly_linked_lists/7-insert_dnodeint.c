#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to the first node
 * @idx: index of the new node
 * @n: element of the new node
 * Return: the address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *curr, *new;
	size_t nodes;

	nodes = dlistint_len(*h);
	if (idx >= nodes)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* add node at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* add node at end */
	if (idx == nodes)
		return (add_dnodeint_end(h, n));
	/* add at middle */
	ptr = curr = *h;
	while (idx > 0)
	{
		curr = curr->next;
		idx--;
	}
	new->n = n;
	ptr = curr->prev;
	new->prev = ptr;
	new->next = curr;
	ptr->next = new;
	curr->prev = new;
	return (new);
}

/**
 * dlistint_len - counts the number of nodes in a dlistint
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{                                                                       size_t nodes = 0;

        if (h == NULL)
                return (0);
        while (h != NULL)
        {                                                                       nodes++;
                h = h->next;
        }
        return (nodes);
}
