#include "lists.h"

/**
 * insert_nodeint_at_index - f
 * @head: 1
 * @n: 2
 * @idx: 3
 * Return: x
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (!ptr)
		{
			free(new_node);
			return (NULL);
		}
		ptr = ptr->next;
	}

	if (!ptr->next)
	{
		ptr->next = new_node;
		return (new_node);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
