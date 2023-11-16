#include "lists.h"

/**
 * add_node - f
 * @head: 1
 * @str: 2
 * Return: t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_HNode = malloc(sizeof(list_t));

	if (!new_HNode)
		return (NULL);

	new_HNode->str = strdup(str);
	if (!new_HNode->str)
	{
		free(new_HNode);
		return (NULL);
	}

	new_HNode->next = *head;
	*head = new_HNode;

	return (new_HNode);
}
