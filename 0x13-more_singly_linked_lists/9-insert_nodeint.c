#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the first node of the linked list.
 * @idx: index of the list where the new node should be added.
 * @n: data to be added at given node.
 * Return: the address of the new node.
 * or NULL, if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int len;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	len = list_len(*head);
	if (idx <= len)
	{
		/* if no node is in the linked list */
		if (ptr == NULL)
		{
			new->n = n;
			*head = new;
			return (new);
		}
		while (idx > 1)
		{
			ptr = ptr->next;
			idx--;
		}
		new->n = n;
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	return (NULL);
}

/**
 * list_len - returns the number of elements in a linked list.
 * @h: pointer to head
 *
 * Return: number of elements in the list.
 */

unsigned int list_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
