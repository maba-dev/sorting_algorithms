#include "sort.h"

/**
 * @brief 
 * 
 */
void swap(listint_t *actual_nodes, listint_t *prev)
{
    listint_t *tmp;
    tmp = actual_nodes;
    actual_nodes = prev;
    prev = tmp;

}


void insertion_sort_list(listint_t **list)
{
    listint_t *actual_nodes;
    listint_t *head = *list;

    head->prev = NULL;
    actual_nodes = head->next;
    actual_nodes->prev = head;
    while (actual_nodes!= NULL)
    {
        while(actual_nodes->prev && (actual_nodes->n < actual_nodes->prev->n))
        {
            swap(actual_nodes, actual_nodes->prev);
            print_list(*list);
        }

        actual_nodes = actual_nodes->next;
    }

}
