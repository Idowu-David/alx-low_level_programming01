#include "lists.h"

/**
 * sum_dlistint - sums all the data(n) of a doubly-linked list
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all the data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
