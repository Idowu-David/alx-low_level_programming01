#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to the first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *curr;


	if (head == NULL)
		return;
	ptr = head;
	curr = ptr->next;
	if (curr == NULL)
		free(ptr);
	while (curr != NULL)
	{
		ptr->next = NULL;
		curr->prev= NULL;
		free(ptr);
		ptr = curr;
		curr = curr->next;
	}
}
