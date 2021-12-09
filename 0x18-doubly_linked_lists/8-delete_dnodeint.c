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
 * delete_dnodeint_at_index - deletes a node at give index in dlistint_t list.
 *
 * @head: start of the list
 * @index: specifies node to be deleted
 *
 * Return: on success 1 on fail -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *head_ptr = *head;
	dlistint_t *b_ptr, *a_ptr, *d_ptr;

	if (index > dlistint_len(head_ptr))
		return (-1);
	if (*head == NULL)
		return (-1);
	if (head_ptr->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	if (index != 0)
	{
		while (i < (index - 1))
		{
			head_ptr = head_ptr->next;
			i++;
		}
		b_ptr = head_ptr;
		/*grab the node to be deleted*/
		head_ptr = head_ptr->next;
		d_ptr = head_ptr;
		/*grab the node after*/
		head_ptr = head_ptr->next;
		a_ptr = head_ptr;
		b_ptr->next = a_ptr;
		a_ptr->prev = b_ptr;
		free(d_ptr);
		return (1);
	}
	else
	{
		d_ptr = head_ptr->next;
		head_ptr->next = d_ptr->next;
		head_ptr->n = d_ptr->n;
		free(d_ptr);
		return (1);
	}}
