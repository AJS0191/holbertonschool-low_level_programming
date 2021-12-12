#include "hash_tables.h"

/**
 * key_index - produces an index to store data
 *
 * @key: data being used to create index
 * @size: the size of the table data will be stored in
 *
 * Return: returns the correct index for data to be stored
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index;

	index = (hash % size);

	return (index);
}
