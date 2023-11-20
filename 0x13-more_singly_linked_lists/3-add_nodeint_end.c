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

	new_node = *head;

	while (new_node)
		new_node->next;

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
