#include "lists.h"
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

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
