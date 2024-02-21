#include "hash_tables.h"

/**
 * create_new_node - Creates a new node for the hash table.
 * @key: Pointer to the key.
 * @value: Pointer to the value.
 *
 * Return: Pointer to the new node, or NULL if allocation fails.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}
/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: Pointer to the hash table.
 * @key: Pointer to the key.
 * @value: Pointer to the value associated with the key.
 *
 * Value must be duplicated. Value can be an empty string.
 * In case of collision, adds the new node at the beginning of the list.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "")  == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			if (strcmp(current_node->value, value) != 0)
			{
				free(current_node->value);
				current_node->value = strdup(value);
			}
			return (1);
		}
	}

	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
