#include "lists.h"

/**
 * reverse_listint - f
 * @head: 1
 * Return: -
 */

listint_t *reverse_listint(listint_t **head)
{

if (!*head || !head)
{
	return (NULL);
}

if (*head == NULL || (*head)->next == NULL)
{
	return (*head);
}

listint_t *curr = *head;
listint_t *next = NULL;
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
