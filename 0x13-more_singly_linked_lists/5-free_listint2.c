#include "lists.h"

/**
 * free_listint - f
 * @head: 1
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_head = *head;

	while (temp_head)
	{
	listint_t *temp_node = temp_head;

	temp_head = temp_head->next;
	free(temp_node);
	}

	head = NULL;
}
