#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_set - inserts a new node at the correct index
 *
 * @ht: the table being added to
 * @key: the key of the node being inserted
 * @value: the value of the node being inserted
 *
 * Return: returns 1 on success and 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_ex;
	unsigned char *key_dup = malloc(sizeof(unsigned char *));
	unsigned long int size;
	hash_node_t **table;
	hash_node_t *new_node;

	if (!ht || !key)
	{
		return (0);
	}
	if (strlen(key) < 1)
		return (0);
	if (!value)
		return (0);
	size = ht->size;
	table = ht->array;
	strcpy((char *)key_dup, key);
	key_ex = key_index(key_dup, size);
	new_node = malloc(sizeof(hash_node_t));
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	if (table[key_ex] == NULL)
	{
		new_node->next = NULL;
		table[key_ex] = new_node;
		ht->array = table;
		return (1);
	}
	else
	{
		if (strcmp(key, table[key_ex]->key) > -1)
		{
			free(table[key_ex]->value);
			table[key_ex]->value = new_node->value;
			free(new_node->value);
			free(new_node->key);
			free(new_node);
			ht->array = table;
			return (1);
		}
		new_node->next = table[key_ex];
		table[key_ex] = new_node;
		ht->array = table;
		return (1);
	}
	return (0);
}
