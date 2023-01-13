#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
