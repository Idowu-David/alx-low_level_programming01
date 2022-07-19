#include "lists.h"

/**
 * print_list - prints all the elements of a struct list.
 * @h: pointer to struct list
 *
 * Return: returns the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

:x
git add .
git commit -m "Truncated"
git push
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}
	return count;
}
