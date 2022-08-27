#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int len;

	ptr = *head;
	len = listint_len(*head);
	if (idx <= len)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		while (idx > 1)
		{
			ptr = ptr->next;
			idx--;
		}
		new->n = n;
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	return (NULL);
}
