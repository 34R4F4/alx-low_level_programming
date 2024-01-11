#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: the linked-list HEAD.
 * Return: the sum of all the data (n) / 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
