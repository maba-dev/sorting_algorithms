#include "sort.h"

/**
 *swap - the function that swaps
 *@list: the list of elements
 *@actual_nodes: the nodes actually
 *@prev: the previous node
 *Return: None
 */

void swap(listint_t **list, listint_t *actual_nodes, listint_t *prev)
{
	if (prev->prev)
		prev->prev->next = actual_nodes;
	else

		*list = actual_nodes;
	if (actual_nodes->next)
		actual_nodes->next->prev = prev;
	prev->next = actual_nodes->next;
	actual_nodes->next = prev;
	actual_nodes->prev = prev->prev;
	prev->prev = actual_nodes;
}
/**
 *insertion_sort_list  - a function that sorts a doubly linked list of integers
 * @list: a list of elemments
 * Return: None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *actual_nodes;
	listint_t *head = *list;
	if (head == NULL)
		return;
	head->prev = NULL;
	actual_nodes = head->next;
	actual_nodes->prev = head;
	while (actual_nodes != NULL)
	{
		while (actual_nodes->prev && (actual_nodes->n < actual_nodes->prev->n))
		{
			swap(list, actual_nodes, actual_nodes->prev);
			print_list(*list);
		}

		actual_nodes = actual_nodes->next;
	}

}
