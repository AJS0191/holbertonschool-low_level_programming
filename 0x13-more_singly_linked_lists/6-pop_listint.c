#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * pop_listint - pops  a linked list
 *
 * @head: linked list being popped
 *
 *
 * Return: value in head being popped
 **/
int pop_listint(listint_t **head)
{
	int holder;
	listint_t *headnew;

	if (*head == NULL)
		return (0);
	holder = (*head)->n;
	headnew = (*head)->next;
	free(*head);
	*head = headnew;
	return (holder);
}
