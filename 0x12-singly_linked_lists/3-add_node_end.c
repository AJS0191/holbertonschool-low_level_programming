#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node to the end of a linked list
 *
 * @head: linked list being added too
 * @str: string being inserted in node
 *
 * Return: returns the address of the updated list
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newn;

	newn = malloc(sizeof(list_t));
	if (!newn)
	{
		free(newn);
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp);
		free(newn);
		return (NULL);
	}

	newn->next = NULL;
	newn->str = strdup(str);
	if (!newn->str)
	{
		free(newn);
		free(temp);
		return (NULL);
	}
	newn->len = strlen(str);
	if (*head == NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newn;
	}
	return (*head);
}
