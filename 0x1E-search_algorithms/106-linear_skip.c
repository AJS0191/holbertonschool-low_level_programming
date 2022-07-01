#include "search_algos.h"

/**
 * linear_skip - finds a value in sorted skiplist
 * @list: head of skiplist being searched
 * @value: the value being searched for
 * Return: pointer to first instance of value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *tmp;
	size_t firstIndex;

	if (!list)
		return (NULL);

	for (tmp = list; tmp; tmp = tmp->express)
	{
		if (tmp->express)
		{
			node = tmp->express;
			printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		}

		else
		{
			node = tmp;
			while (node->next)
				node = node->next;
		}

		if (value <= node->n || !(tmp->express))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					tmp->index, node->index);
			firstIndex = node->index;

			for (node = tmp; node && node->index <= firstIndex; node = node->next)
			{
				printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
				if (value == node->n)
					return (node);
			}
		}
	}
	return (NULL);
}
