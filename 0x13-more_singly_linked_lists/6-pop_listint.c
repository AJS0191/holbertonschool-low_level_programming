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
int pop_listint(listint_t **head)
{
	int holder;

	holder = (*head)->n;
	*head = (*head)->next;
	return (holder);
}
