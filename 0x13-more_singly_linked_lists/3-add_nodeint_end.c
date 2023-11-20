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

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (head)
	{
		*head = (*head)->next;
	}

	*head = new_node;

	return (new_node);
}
