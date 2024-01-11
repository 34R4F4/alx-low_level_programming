#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: the dlistint_t list HEAD.
 * Return: VOID.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
