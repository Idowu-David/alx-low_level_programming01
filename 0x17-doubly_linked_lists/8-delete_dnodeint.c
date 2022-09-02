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
	dlistint_t *ptr, *ptr2, *ptr3;

	ptr = *head;
	node_len = dlistint_len(*head);
	if (index > node_len)
		return (-1);
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
	if (ptr2->next == NULL)
	{
		free(ptr2);
		ptr2 = ptr->next = NULL;
		return (1);
	}
	ptr3 = ptr2->next;
	ptr->next = ptr3;
	ptr3->prev = ptr;
	free(ptr2);
	ptr2 = NULL;
	return (1);
}
