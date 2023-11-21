#include "lists.h"

/**
 * add_nodeint_end - f
 * @head: 1
 * @n: 2
 * Return: x
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;

	return (new_node);
}
