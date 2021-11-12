#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_listint - prints elements of a listint_t linked list
 *
 * @h: linked list to be printed
 *
 *
 * Return: returns the number of nodes in the list which is of type ssize_t
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *printer;
	size_t node_count = 0;

	printer = h;
	while (printer->next != NULL)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
		node_count++;
	}
	/*Have to account for last node*/
	printf("%d\n", printer->n);
	node_count++;
	free(printer);
	return (node_count);
}
