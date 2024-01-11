#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: linked-list HEAD.
 * @idx: the node index in the linked list, starting from 0.
 * @n: the node->n vlue.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node;
    dlistint_t *temp = *h;
    dlistint_t *current = *h;
    unsigned int l = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }

    if (idx > l + 1)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n));

    if (idx == l + 1)
        return (add_dnodeint_end(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;

    while (current != NULL && idx > 0)
    {
        current = current->next;
        idx -= 1;
    }

    if (current != NULL && idx == 0)
    {
        new_node->prev = current->prev;
        current->prev->next = new_node;
        new_node->next = current;

        return (new_node);
    }
    else
    {
        free(new_node);  // Free the allocated memory if insertion fails
        return (NULL);
    }
}
