#include "lists.h"
/**
 * dlistint_len - function returns the number of elements in a linked list.
 * @h: head pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		h = h->next;
		r++;
	}

	return (r);
}
