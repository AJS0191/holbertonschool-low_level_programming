#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * list_len - returns the amount of elements in list
 *
 * @h: linked list to be counted
 *
 *
 * Return: returns the number of nodes in the list which is of type size_t
 **/


size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t nodes = 0;

	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
