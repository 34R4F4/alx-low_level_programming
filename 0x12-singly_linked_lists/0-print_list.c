#include "lists.h"

/**
 * _strl - f
 * @str: 1
 * Return: l
 */
int _strl(char *str)
{
	int l = 0;

	if (!str)
		return (0);
	while (*str++)
		l++;
	return (l);
}

/**
 * print_list - f
 * @h: 1
 * Return: t
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _strl(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}

	return (n);
}
