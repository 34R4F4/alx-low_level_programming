#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the hash table/array.
 *
 * Return: Pointer to the newly created sorted hash table, or NULL if failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *PHP_HT;
	unsigned long int i;

	PHP_HT = malloc(sizeof(shash_table_t));
	if (PHP_HT == NULL)
		return (NULL);

	PHP_HT->size = size;
	PHP_HT->shead = NULL;
	PHP_HT->stail = NULL;
	PHP_HT->array = malloc(sizeof(shash_node_t) * size);
	if (PHP_HT->array == NULL)
	{
		free(PHP_HT);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		PHP_HT->array[i] = NULL;
	}

	return (PHP_HT);
}

/**
 * make_shash_node - Creates a node for the sorted hash table.
 * @key: Pointer to key.
 * @value: Pointer to the value associated with the key.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *sHT_node;

	sHT_node = malloc(sizeof(shash_node_t));
	if (sHT_node == NULL)
		return (NULL);

	sHT_node->key = strdup(key);
	if (sHT_node->key == NULL)
	{
		free(sHT_node);
		return (NULL);
	}

	sHT_node->value = strdup(value);
	if (sHT_node->value == NULL)
	{
		free(sHT_node->key);
		free(sHT_node);
		return (NULL);
	}

	sHT_node->next = sHT_node->snext = sHT_node->sprev = NULL;
	return (sHT_node);
}

/**
 * add_to_sorted_list - Adds a node to the sorted (by key's ASCII),
 * linked list.
 * @table: Pointer to sorted hash table.
 * @node: Pointer to node to add.
 *
 * Return: No return.
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp_VAR;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}

	tmp_VAR = table->shead;
	while (tmp_VAR != NULL)
	{
		if (strcmp(node->key, tmp_VAR->key) < 0)
		{
			node->snext = tmp_VAR;
			node->sprev = tmp_VAR->sprev;
			tmp_VAR->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp_VAR = tmp_VAR->snext;
	}

	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: Pointer to hash table to add or update the key/value pair.
 * @key: Pointer to key.
 * @value: Pointer to the value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *newVALUE;
	shash_node_t *sHT_node, *tmp_VAR;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_VAR = ht->array[index];
	while (tmp_VAR != NULL)
	{
		if (strcmp(tmp_VAR->key, key) == 0)
		{
			newVALUE = strdup(value);
			if (newVALUE == NULL)
				return (0);

			free(tmp_VAR->value);
			tmp_VAR->value = newVALUE;
			return (1);
		}
		tmp_VAR = tmp_VAR->next;
	}

	sHT_node = make_shash_node(key, value);
	if (sHT_node == NULL)
		return (0);

	sHT_node->next = ht->array[index];
	ht->array[index] = sHT_node;

	add_to_sorted_list(ht, sHT_node);
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a given key.
 * @ht: Pointer to the hash table to search.
 * @key: Pointer to the key to look for.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp_VAR;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_VAR = ht->array[index];
	while (tmp_VAR != NULL)
	{
		if (strcmp(tmp_VAR->key, key) == 0)
			return (tmp_VAR->value);
		tmp_VAR = tmp_VAR->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the contents of a hash table.
 * @ht: Pointer to the hash table to be printed.
 *
 * Note: Elements are printed in the order they were added.
 * Return: No return value.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp_VAR;
	char PRINTed = 0; /* PRINTed indicating whether data has been printed */

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	tmp_VAR = ht->shead;
	while (tmp_VAR != NULL)
	{
		if (PRINTed == 1)
			printf(", ");
		printf("'%s': '%s'", tmp_VAR->key, tmp_VAR->value);
		PRINTed = 1;
		tmp_VAR = tmp_VAR->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table contents in reverse order.
 * @ht: Pointer to the hash table to be printed.
 *
 * Note: Elements are printed in reverse order of their addition.
 * Return: No return value.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp_VAR;
	char PRINTed = 0; /* PRINTed indicating whether data has been printed */

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	tmp_VAR = ht->stail;
	while (tmp_VAR != NULL)
	{
		if (PRINTed == 1)
			printf(", ");
		printf("'%s': '%s'", tmp_VAR->key, tmp_VAR->value);
		PRINTed = 1;
		tmp_VAR = tmp_VAR->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table and its elements.
 * @ht: Pointer to the hash table to be deleted.
 *
 * Note: Memory for keys, values, and nodes is freed.
 * Return: No return value.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
