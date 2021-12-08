#include "lists.h"
/**
 * dlistint_len - counts the nodes in a dlistin_len list
 *
 * @h: head of the list being worked on
 *
 * Return: returns the amount of nodes as size_t
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

/**
 * free_dlistint - free's the nodes of a dlistint_t list
 *
 * @head: the first node in the list
 * Return: void
 **/

void free_dlistint(dlistint_t *head)
{
	size_t nodes = dlistint_len(head);
	dlistint_t **holder = malloc(sizeof(dlistint_t *) * nodes);
	int i;

	for (i = 0; head; i++)
	{
		holder[i] = head;
		head = head->next;
	}

	while (i > -1)
	{
		free(holder[i]);
		i--;
	}
	free(holder);
}
