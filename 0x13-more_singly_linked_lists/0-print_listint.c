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
		printf("Erorr\n");
		return (n);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
	}
	
	printf("%lu\n", x);
	return (x);
}
