#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t i;

    if (array == NULL || size == 0)
        return (-1);

    while (array[prev] < value && prev < size)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

    i = prev - step;
    while (array[i] < value && i < size)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i++;
    }

    if (array[i] == value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        return (i);
    }

    return (-1);
}

