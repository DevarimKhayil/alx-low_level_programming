#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, i, j;
    listint_t *current = list, *prev = NULL;

    if (list == NULL)
        return NULL;

    jump = sqrt(size);

    for (i = 0; current && current->n < value; i += jump)
    {
        prev = current;
        for (j = 0; current && j < jump; j++)
            current = current->next;

        if (current)
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    if (current == NULL)
        return NULL;

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    for (j = prev->index; j <= current->index; j++)
    {
        printf("Value checked at index [%lu] = [%d]\n", j, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL;
}

