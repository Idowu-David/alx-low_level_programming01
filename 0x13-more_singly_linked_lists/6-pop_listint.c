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
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	temp = NULL;
	return (data);
}
