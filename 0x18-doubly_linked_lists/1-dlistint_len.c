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
