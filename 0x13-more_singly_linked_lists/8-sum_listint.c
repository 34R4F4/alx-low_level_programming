#include "lists.h"

/**
 * sum_listint - f
 * @head: 1
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
