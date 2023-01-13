#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in a dlistint
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
