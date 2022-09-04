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

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the first node of the linked list
 * @n: data contained in the node
 *
 * Return: the address of the new element, or NULL, if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	ptr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
	}
	return (new);
}

/**
 * print_dlistint - prints all the elements of a doubly-linked list
 * @h: - pointer to the first node
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * free_dlistint - frees a doubly-linked list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
