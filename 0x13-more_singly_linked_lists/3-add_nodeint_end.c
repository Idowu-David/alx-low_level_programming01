#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list.
 * @head: pointer to the new node.
 * @n: data which new node will contain
 *
 * Return: returns a pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (new->next != NULL)
		new = new->next;
	new->next = temp;
	return (temp);
}
