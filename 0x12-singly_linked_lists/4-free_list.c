#include "lists.h"

/**
 * free_list - f
 * @head: 1
 * Return: l
 */
void free_list(list_t *head)
{
	list_t *cwn, *nxn;

	if (!head)
		return;

	cwn = head;
	while (cwn)
	{
		nxn = cwn->next;
		free(cwn->str);
		free(cwn);
		cwn = nxn;
	}
}
