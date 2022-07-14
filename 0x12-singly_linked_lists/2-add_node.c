#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first pointer to node.
 * @str: string to add.
 *
 * Return: returns the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *_strdup;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	_strdup = strdup(str);
	if (_strdup == NULL)
	{
		free(new);
		return (NULL);
	}
	while (_strdup[len] != '\0')
		len++;
	new->str = _strdup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
