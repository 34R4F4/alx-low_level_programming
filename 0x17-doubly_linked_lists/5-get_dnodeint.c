#include "lists.h"
/**
 * get_dnodeint_at_index - eturns the nth node of a linked list.
 * @head: linked-list HEAD.
 * @index: the nth node of a linked list, starting from 0.
 * Return: nth-node / NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index -= 1;
	}

	if (head != NULL && index == 0)
		return (head);
	else
		return (NULL);
}
