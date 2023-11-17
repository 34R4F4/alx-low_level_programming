#include "lists.h"

/**
 * add_node_end - f
 * @head: 1
 * @str: 2
 * Return: t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_LNode = malloc(sizeof(list_t));
	list_t *Nptr = *head;

	if (!new_LNode)
		return (NULL);

	if (str)
	{
		new_LNode->str = strdup(str);
		if (!new_LNode->str)
		{
			free(new_LNode);
			return (NULL);
		}
		new_LNode->len = _strl(new_LNode->str);
	}

	if (Nptr)
	{
		while (Nptr->next)
			Nptr = Nptr->next;
		Nptr->next = new_LNode;
	}
	else
		*head = new_LNode;

	return (new_LNode);
}
