#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes specified node in dlistint_t list
 *
 * @head: start of the list
 * @index: specifies node to be deleted
 *
 * Return: on success 1 on fail -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *head_h = *head;

	while (head_h)
	{
		if (i == index)
		{
			if (head_h->prev)
				head_h->prev->next = head_h->next;
			else
				*head = head_h->next;
			if (head_h->next)
				head_h->next->prev = head_h->prev;
			free(head_h);
			return (1);
		}
		head_h = head_h->next;
		i++;
	}
	return (-1);

}
