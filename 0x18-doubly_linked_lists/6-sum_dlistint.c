#include "lists.h"
/**
 * sum_dlistint - adds the data of every node in a dlistin_t list
 *
 * @head: the start of the list
 *
 * Return: returns the sum of data held in a dlistin_t list
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
