#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list - frees given list
 *
 * @head: linked list being freed
 *
 * Return: VOID
 **/

void free_list(list_t *head)
{
	list_t *temp;
	unsigned int i;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		exit(99);
	}
	*temp = *head;
	for (i = 0; temp->next != NULL; i++)
	{
		free(temp);
		temp = temp->next;
	}
	free(temp);
}
