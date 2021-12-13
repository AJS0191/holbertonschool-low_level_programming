#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - retrieves a value from an ht with a key
 *
 * @ht: table being searched
 * @key: the key being searched
 *
 * Return: the value or NULL
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size = ht->size;
	hash_node_t **table = ht->array;
	unsigned long int index;
	unsigned char *key_dup = malloc(sizeof(unsigned char *));
	hash_node_t *temp;

	if (ht)
	{
		strcpy((char *)key_dup, key);
		index = key_index(key_dup, size);
		free(key_dup);

		temp = table[index];
		if (temp == NULL)
			return (NULL);
		if (strcmp(temp->key, key) != -1)
			return (temp->value);

		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key) != -1)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
