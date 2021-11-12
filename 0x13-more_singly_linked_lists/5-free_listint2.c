#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 *
 * @head: linked list being freed
 *
 *
 * Return: void
 **/

void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		freenode = (*head)->next;
		free(*head);
		*head = freenode;
	}
	free(freenode);
	*head = NULL;
}
