#include "lists.h"

/**
 * get_nodeint_at_index - f
 * @head: 1
 * @index: 2
 * Return: nth
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!nth)
		{
			return (NULL);
		}
		nth = nth->next;
	}

	return (nth);
}
