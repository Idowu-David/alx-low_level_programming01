#include "lists.h"

/**
 * free_listint - frees the memory allocated in a linked list
 * @head: pointer to the first node of the list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *p, *q;

	p = head;
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}
}
