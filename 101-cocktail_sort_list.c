#include "sort.h"
#include <stdio.h>

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending order
 *                      using the Cocktail shaker sort algorithm
 * @list: Pointer to pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
    int swapped = 1;
    listint_t *start = *list;
    listint_t *end = NULL;

    while (swapped)
    {
        swapped = 0;
        while (start && start->next != end)
        {
            if (start->n > start->next->n)
            {
                swap_nodes(list, start, start->next);
                print_list(*list);
                swapped = 1;
            }
            else
                start = start->next;
        }
        if (!swapped)
            break;
        swapped = 0;
        end = start;
        while (start && start->prev != NULL)
        {
            if (start->n < start->prev->n)
            {
                swap_nodes(list, start->prev, start);
                print_list(*list);
                swapped = 1;
            }
            else
                start = start->prev;
        }
    }
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @list: Pointer to pointer to the head of the list
 * @node1: First node to swap
 * @node2: Second node to swap
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
    if (node1->prev)
        node1->prev->next = node2;
    else
        *list = node2;
    if (node2->next)
        node2->next->prev = node1;
    node1->next = node2->next;
    node2->prev = node1->prev;
    node1->prev = node2;
    node2->next = node1;
}
