#include "lists.h"

/**
 * free_listint2 - f
 * @head: 1
 * Return: void
 */

void free_listint2(listint_t **head)
{
	while (*head)
	{
	listint_t *temp_node = *head;

	*head = (*head)->next;
	free(temp_node);
	}

	head = NULL;
}
