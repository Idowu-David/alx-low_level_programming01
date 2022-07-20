#include "lists.h"

/**
 * free_listint2 - frees the memory allocated in a linked list.
 * @head: pointer to the first node of the linked list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
