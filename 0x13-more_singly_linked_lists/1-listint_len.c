#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * listint_len - prints elements of a list_t linked list
 *
 * @h:  constant linked list to be printed
 *
 *
 * Return: returns the number of nodes in the list
 **/

size_t listint_len(const listint_t *h)
{
	listint_t *printer;
	size_t node_count = 0;

	printer = malloc(sizeof(listint_t));
	if (!printer)
	{
		free(printer);
		return (0);
	}
	*printer = *h;
	while (printer->next != NULL)
	{
		printer = printer->next;
		node_count++;
	}
	/* Last node counted here*/
	node_count++;
	return (node_count);
}
