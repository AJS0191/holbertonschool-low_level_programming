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
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (key == NULL || strlen(key) < 1 || !value || !ht)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
			return (1);
		}
		temp = temp->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
