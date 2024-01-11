#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index where the new node should be added (starting at 0)
 * @n: Value to be stored in the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp = *h;
unsigned int count = 0;

while (temp != NULL)/* Count the number of nodes in the list */
{
	temp = temp->next;
	count++;
}
if (idx > count)/* Check if the given index is valid */
	return (NULL);
if (idx == 0)/* If index is 0, add node at the beginning */
	return (add_dnodeint(h, n));
if (idx == count)/* If index is the number of nodes, add node at the end */
	return (add_dnodeint_end(h, n));
/* Traverse to find the node at the position before the insertion point */
temp = *h;
for (count = 0; count < idx - 1; count++)
{
	if (temp == NULL)
		return (NULL);
	temp = temp->next;
}
/* Check if the current node is not NULL (index is valid) */
if (temp != NULL)
{
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* Initialize the data of the new node */
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	/* Update pointers to insert the new node at the specified index */
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);/* Return the address of the new element */
}
return (NULL); /* Index is out of bounds */
}
