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
 * get_dnodeint_at_index - grabs node at specified index
 *
 * @head: the start of the list
 * @index: index specifying which node
 *
 * Return: Returns a pointer to specified node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (dlistint_len(head) < index)
		return (NULL);

	if (!head)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
