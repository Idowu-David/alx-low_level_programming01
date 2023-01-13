#include "lists.h"

/**
 * sum_dlistint - sums the element in a dlistint
 * @head: pointer to the first node
 * Return: sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
