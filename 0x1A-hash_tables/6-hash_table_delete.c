#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and all its elements.
 * @ht: Pointer to the hash table to be deleted.
 *
 * Return: No return value.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				current = ht->array[i];
				free(current->key);
				free(current->value);
				ht->array[i] = ht->array[i]->next;
				free(current);
			}
		}
	}
	free(ht->array);
	free(ht);
}
