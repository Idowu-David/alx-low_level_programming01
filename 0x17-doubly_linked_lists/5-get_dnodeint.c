#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to the first node of the list
 * @index: position of the node, starting from 0
 * Return: the node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t nodes = dlistint_len(head);
	dlistint_t *ptr = head;

	if (ptr == NULL)
		return (NULL);
	if (index >= nodes)
		return (NULL);
	index++;
	while (index > 1)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}

/**
 * dlistint_len - counts the number of nodes in a dlistint
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)                              {
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
