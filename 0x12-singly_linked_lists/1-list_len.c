#include "lists.h"

/**
 * list_len - returns the number of elements in a list.
 * @h: singly linked list.
 * Return: number of all elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t flora;

	flora = 0;
	while (h != NULL)
	{
		h = h->next;
		flora++;
	}
	return (flora);
}
