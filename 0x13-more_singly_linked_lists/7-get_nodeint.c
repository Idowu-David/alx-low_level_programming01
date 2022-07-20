#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list.
 * listint_len - returns the number of nodes in the linked list.
 * @head: pointer to the first node of the linked list.
 * @index: index of the node
 *
 * Return: returns the data in the given index of a node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t ind;
	listint_t *ptr;

	ptr = head;
	/**
	 * call the listint_len function to get the number of nodes in the given list.
	 * if the index passed is greater than the number of nodes in the function,
	 * return (NULL)
	 */
	ind = listint_len(head);
	if (index > (ind - 1))
		return (NULL);
	while (index > 1)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr->next);
}
