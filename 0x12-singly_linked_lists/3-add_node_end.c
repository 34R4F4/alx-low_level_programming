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

	if (!new_LNode)
		return (NULL);

	new_LNode->next = *head;

	while (new_LNode->next != NULL)
		new_LNode->next++;

	new_LNode->next = new_LNode;

	new_HNode->str = strdup(str);
	if (!new_LNode->str)
	{
		free(new_LNode);
		return (NULL);
	}

	return (new_LNode);
}
