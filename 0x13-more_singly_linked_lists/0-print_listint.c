#include "lists.h"

/**
 * print_listint - f
 * @h: 1
 * Return: x
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
