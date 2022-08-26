#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: pointer to the first node of a linked list.
 *
 * Return: the data which the node contains.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	ptr = *head;
	if (*head == NULL)
		return (0);
	*head = ptr->next;
	data = ptr->n;
	free(ptr);
	return (data);
}
