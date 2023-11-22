#include "lists.h"

/**
 * delete_nodeint_at_index - f
 * @head: 1
 * @index: 2
 * Return: 1/-1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_node, *current_node;

	if (!head || !*head)
	{
		return (-1);
	}

	if (index == 0 || !index)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	current_node = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (!current_node->next)
		{
			return (-1);
		}
		current_node = current_node->next;
}
	if (!current_node->next)
	{
		return (-1);
	}

	temp_node = current_node->next;
	free(temp_node);
	return (1);
}
