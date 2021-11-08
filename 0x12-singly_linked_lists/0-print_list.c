#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * print_list - prints elements of a list_t linked list
 *
 * @h: linked list to be printed
 *
 *
 * Return: returns the number of nodes in the list which is of type size_t
 **/


size_t print_list(const list_t *h)
{
	/* allowed to use printf */
	const list_t *temp = h;
	size_t nodes = 0;
	/**
	 * prints the first nodes string
	 * printf("%s", h->str);
	 **/
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
