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
	listint_t *curr = *head;
	listint_t *prev = *head;

	/* if head points to the last node */
	if (curr->next == NULL)
	{
		free(curr);
		*head = NULL;
		curr = prev = NULL;
	}
	/* if index is out of range */
	if (index <= (listint_len(*head) - 1))
	{
		/* to delete the first node */
		if (index ==  0)
		{
			*head = curr->next;
			free(curr);
			curr = NULL;
			prev = NULL;
			return (1);
		}
		/* to delete other nodes */
		while (index > 1)
		{
			curr = curr->next;
			prev = curr;
			index--;
		}
		curr = curr->next;
		prev->next = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}
	/* if index is out of range */
	return (-1);
}
