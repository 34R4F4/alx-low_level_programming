#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the linked-list HEAD.
 * @n: the new node ->n value.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));

	if (!new_tail)
		return (NULL);

	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new_tail;
		new_tail->prev = current;
	}

	return (new_tail);
}
