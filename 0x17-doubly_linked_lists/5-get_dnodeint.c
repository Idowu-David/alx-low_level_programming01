#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to pointer to the first node
 * @index: postion of the pointer to be returned
 *
 * Return: the address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	if (index > (dlistint_len(head)))
		return (NULL);
	ptr = head;
	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}

/**
 * dlistint_len - counts the number of elements in a linked list
 * @h: pointer to the first node of the list
 *
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
