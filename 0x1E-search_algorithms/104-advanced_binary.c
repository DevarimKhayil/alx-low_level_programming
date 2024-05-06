#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - Searches for a value in a sorted array of integers
 *                             using the Advanced Binary search algorithm (recursive)
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the search range
 * @high: Ending index of the search range
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid;
    size_t i;

    if (low > high)
        return (-1);

    printf("Searching in array:");
    for (i = low; i <= high; i++)
    {
        printf(" %d", array[i]);
        if (i < high)
            printf(",");
    }
    printf("\n");

    mid = low + (high - low) / 2;

    if (array[mid] == value)
    {
        if (array[mid - 1] == value)
            return advanced_binary_recursive(array, low, mid, value);
        return (mid);
    }
    else if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, high, value);
    else
        return advanced_binary_recursive(array, low, mid, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the Advanced Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return advanced_binary_recursive(array, 0, size - 1, value);
}

