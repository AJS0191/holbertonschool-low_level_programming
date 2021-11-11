#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * add_nodeint_end - adds new node at end of linked list
 *
 * @head: pointer to head of list
 * @n: integer being stored in new node
 *
 * Return: returns the number of nodes in the list which is of type size_t
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn, *indexer;
	int input = n;

	newn = malloc(sizeof(listint_t));
	if (!newn)
	{
		free(newn);
		exit(0);
	}
	indexer = malloc(sizeof(listint_t));
	if (!indexer)
	{
		free(indexer);
		exit(0);
	}
	newn->next = NULL;
	newn->n = input;
	if (*head == NULL)
		*head = newn;
	else
	{
		indexer = *head;
		while (indexer->next != NULL)
		{
			indexer = indexer->next;
		}
		indexer->next = newn;
	}
	return (*head);
}
