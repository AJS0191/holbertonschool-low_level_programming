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

int sum_listint(listint_t *head)
{
	listint_t *holder = malloc(sizeof(listint_t));
	int sum = 0;

	if (!holder)
		return (NULL);

	holder = head;
	while(holder != NULL)
	{
		sum += holder->n;
		holder = holder->next;
	}
	return (sum);
}
