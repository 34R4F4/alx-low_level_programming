#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Pointer to the hash table to look into.
 * @key: Pointer to the key to search for.
 *
 * Return: Value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	for (; temp_node != NULL; temp_node = temp_node->next)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
	}

	return (NULL);
}
