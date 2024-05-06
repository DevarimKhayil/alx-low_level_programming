#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                       using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t low, high;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    low = bound / 2;
    high = (bound < size - 1) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    return binary_search1(array, low, high, value);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the search range
 * @high: Ending index of the search range
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search1(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    while (low <= high)
    {
        print_array(array, low, high);

        mid = (low + high) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}

/**
 * print_array - Prints the elements of an array within a given range
 * @array: Pointer to the first element of the array
 * @low: Starting index of the range
 * @high: Ending index of the range
 */
void print_array(int *array, size_t low, size_t high)
{
    size_t i; /* Declare the variable outside the loop */

    printf("Searching in array:");
    for (i = low; i <= high; i++)
    {
        printf(" %d", array[i]);
        if (i < high)
            printf(",");
    }
    printf("\n");
}

