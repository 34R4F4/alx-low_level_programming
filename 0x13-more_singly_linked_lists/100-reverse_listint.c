#include "lists.h"

/**
 * reverse_listint - f
 * @head: 1
 * Return: -
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *curr, *next;

if (!*head || !head)
{
	return (NULL);
}

curr = *head;
next = NULL;

*head = NULL;

while (curr)
{
	next = curr->next;
	curr->next = *head;

	*head = curr;
	curr = next;
}

return (*head);
}
