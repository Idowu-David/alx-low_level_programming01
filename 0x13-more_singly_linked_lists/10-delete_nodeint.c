#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of linked list at a given index.
 * @head: pointer to the first node of the  list.
 * @index: position of the node to be deleted.
 *
 * Return: return 1, if success. return -1 if function fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;
	unsigned int ind;

	ind = listint_len(*head);
	if (index > (ind - 1))
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index > 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
