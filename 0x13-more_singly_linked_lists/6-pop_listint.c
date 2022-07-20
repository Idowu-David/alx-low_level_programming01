#include "lists.h"

/**
 * pop_listint - deletes the head of a node
 * @head: pointer to the first node of a linked list.
 *
 * Return: the data which the node contains.
 */

int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
		return (0);
	listint_t *temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (n);
}
