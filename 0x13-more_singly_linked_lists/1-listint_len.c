#include "lists.h"

/**
 * listint_len - f
 * @h: 1
 * Return: x
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}

	return (x);
}
