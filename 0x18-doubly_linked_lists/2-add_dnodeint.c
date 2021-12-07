#include "lists.h"

/**
 * add_dnodeint - adds a node to the end of dlistint_t list
 *
 * @head: head of the list
 * @n: int to be stored inside of new node
 *
 * Return: returns the address of the new element or NULL
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
	}

	*head = new_node;
	return (*head);
}
