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
	{
		/** printf("Erorr\n"); */
		return (x);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	/** printf("%lu\n", x); */
	return (x);
}
