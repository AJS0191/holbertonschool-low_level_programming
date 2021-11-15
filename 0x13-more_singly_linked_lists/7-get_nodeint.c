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
#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * get_nodeint_at_index - selects a specific linked list
 *
 * @head: linked list
 * @index: specifies node
 *
 * Return: pointer to specified node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	unsigned int checker = listint_len(head);
	listint_t *holder;

	if (index > checker)
		return (NULL);
	holder = head;
	for (counter = 0; counter < index; counter++)
	{
		printf("%d\n", counter);
		if (holder->next == NULL)
		{
			return (NULL);
		}
		holder = holder->next;
	}
	return (holder);
}
