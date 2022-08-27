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
	len = listint_len(*head);
	if (idx <= len)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
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
