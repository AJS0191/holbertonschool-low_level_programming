#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of dlistint_t list
 *
 * @head: head of the list
 * @n: int to be stored inside of new node
 *
 * Return: returns the address of the new element or NULL
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *head_hold = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (!*head)
	{
		head_hold = new_node;
		*head = head_hold;
		return (*head);
	}
	head_hold->prev = new_node;
	head_hold = new_node;
	*head = head_hold;
	return (*head);

}
