#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to a linked list
 *
 * @head: linked list being added too
 * @str: string being inserted in node
 *
 * Return: returns the address of the updated list
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;

	newn = malloc(sizeof(list_t));
	if (!newn)
	{
		return (NULL);
	}
	newn->next = *head;
	newn->str = strdup(str);
	newn->len = strlen(str);
	*head = newn;

	return (*head);
}
