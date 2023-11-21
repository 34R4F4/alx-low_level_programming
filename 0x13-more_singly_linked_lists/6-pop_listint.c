#include "lists.h"

/**
 * pop_listint - f
 * @head: 1
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *new_h;
	int the_n;

	if (!head)
		return;

	new_h = (*head)->next;
	the_n = (*head)->n;

	free(*head);

	*head = new_h;

	return (the_n);
}
