#include "lists.h"
/**
 * get_last_node - grabs the last node in an dlistint_t list
 * @head: start of the list
 *
 * Return: returns the last node in the list
 **/

dlistint_t *get_last_node(dlistint_t *head)
{
	dlistint_t *last_node;

	if (head->next == NULL)
	{
		return (head);
	}
	while (head->next != NULL)
	{
		last_node = head->next;
		head = head->next;
	}
	return (last_node);
}

/**
 * add_dnodeint_end - adds a node to the end of a dlistint_t list
 *
 * @head: address to the head of the list
 * @n: content of new node
 *
 * Return: returns the address of the new element or NULL
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node)
	{
		if (*head == NULL)
		{
			new_node->n = n;
			new_node->next = NULL;
			new_node->prev = NULL;
			*head = new_node;
			return (*head);
		}


		else
		{
			last_node = get_last_node(*head);
			last_node->next = new_node;
			new_node->n = n;
			new_node->next = NULL;
			new_node->prev = last_node;
			return (new_node);
		}
	}
	else
		return (NULL);

}
