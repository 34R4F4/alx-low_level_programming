#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: list HEAD.
 * @index: node INDEX, start = 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int len = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (len == 0 || index > len)
		return (-1);
	if (index == 0)/** HEAD */
	{
		tmp = head;
		head = head->next;
		head->prev = NULL;
		free(tmp);
		return (1);
	}
	else if (index == len)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	ele if (index > 0 && index < len)
	{
		tmp = head;

		while (index != 0)
		{
			tmp = tmp->next;
			index--;
		}
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	else
		return (-1);
}
