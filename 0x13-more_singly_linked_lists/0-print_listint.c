#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the head of the linked list.
 *
 * Return: returns the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
