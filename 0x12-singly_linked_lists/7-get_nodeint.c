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
