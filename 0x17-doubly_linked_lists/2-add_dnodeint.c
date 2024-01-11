#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the linked list
 * @n: new node->n value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create NEW_HEAD node */
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	if (!new_head)
		return (NULL);

	/* Assign NEW_HEAD values */
	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;

	/* Re-Assign the linked-list HEAD */
	if (*head != NULL)
		(*head)->prev = new_head;
	*head = new_head;

	return (new_head);

}
