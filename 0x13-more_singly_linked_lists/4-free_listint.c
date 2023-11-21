#include "lists.h"

/**
 * free_listint - f
 * @head: 1
 * Return: void
 */

void free_listint(listint_t *head) {
	while (head)
	{
	listint_t *temp_node = head;
	head = head->next;
	free(temp_node);
	}
}
