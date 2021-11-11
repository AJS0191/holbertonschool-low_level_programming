#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * add_nodeint - adds a node to a linked list
 *
 * @head: linked list to be printed
 * @n: number being added to new node
 *
 * Return: returns the the updated head node
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	int input = n;
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		free (newn);
		exit(0);
	}

	newn->next = *head;
	newn->n = input;

	*head = newn;
	return (*head);
}
