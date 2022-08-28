#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first element of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listint_t *ptr;

	ptr = (void *)head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr->next, ptr->n);
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
