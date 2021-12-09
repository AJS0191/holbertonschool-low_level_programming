#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: the dead of the linked list to be printed.
 *
 * Return: returns the number of nodes stored as a size_t.
 **/


size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *head_copy;

	if (!h)
		return (nodes);

	while (head_copy != NULL)
	{
		printf("%d\n", head_copy->n);
		head_copy = head_copy->next;
		nodes++;
	}
	return (nodes);
}
