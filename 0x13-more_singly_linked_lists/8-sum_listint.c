#include "lists.h"

/**
 * sum_listint - sum up the values of the list.
 * @head: pointer to the first node of the list.
 *
 * Return: value of a node index
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *ptr;
	
	ptr = head;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
