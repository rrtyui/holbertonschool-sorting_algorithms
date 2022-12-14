#include "sort.h"

/**
 * insertion_sort_list - sorts an array of integers in ascending order using an
 * insertion algorithm
 *@list: struct
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *actual_n, *new_n;

	if (list == NULL)
		return;

	actual_n = (*list)->next;

	while (actual_n)
	{
		new_n = (*actual_n).next;
		while (actual_n->prev && actual_n->n < actual_n->prev->n)
		{
			(actual_n)->prev->next = (actual_n)->next;

			if ((*actual_n).next)
				(actual_n)->next->prev = (actual_n)->prev;
			(actual_n)->next = (actual_n)->prev;

			if ((*actual_n).next)
			{
				(actual_n)->prev = (actual_n)->next->prev;
				(actual_n)->next->prev = actual_n;
			}
			if ((*actual_n).prev)
			{
				(*actual_n).prev->next = actual_n;
			}
			else
				(*list) = actual_n;
			print_list(*list);
		}
		actual_n = new_n;
	}
}
