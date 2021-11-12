#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
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
	listint_t *freed;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		freed = (*head)->next;
		free(*head);
		*head = freed;
	}
	free(freed);
	*head = NULL;
}
