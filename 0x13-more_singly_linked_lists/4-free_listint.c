#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * print_list - prints elements of a list_t linked list
 *
 * @h: linked list to be printed
 *
 *
 * Return: returns the number of nodes in the list which is of type size_t
 **/
void free_listint(listint_t *head)
{
	listint_t *temp, *helper;
	int *tempint;

	temp = head;
	while(temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
