#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index `index` of a linked list
 * @head: pointer to pointer to first node of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeds. -1, if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t node_len;
	dlistint_t *ptr = *head, *ptr2, *ptr3;

	node_len = dlistint_len(*head);
	if (index >= node_len)
		return (-1);
	/* to delete the only node */
	if (ptr->next == NULL)
	{
		free(*head);
		ptr = *head = NULL;
		return (1);
	}
	/* to delete first node */
	if (index == 0)
	{
		*head = ptr->next;
		(*head)->prev = NULL;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	while (index > 1)
	{
		ptr = ptr->next;
		index--;
	}
	ptr2 = ptr->next;
	/* to delete last node */
	if (ptr->next == NULL)
	{
		free(ptr2);
		return (1);
	}
	ptr3 = ptr2->next;
	ptr->next = ptr3;
	ptr3->prev = ptr;
	free(ptr2);
	ptr2 = NULL;
	return (1);
}

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: pointer to the first node of the list
 *
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
