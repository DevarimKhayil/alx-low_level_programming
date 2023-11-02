#include "main.h"
/**
  *array_range - Create an array of integers from min to max
  *@min: The minimum value to start the array with
  *@max: The maximum value to end the array with
  *Return: A pointer to the newly created array, or NULL
  */
int *array_range(int min, int max)
{
	int *arr;
	int size = max - min + 1;
	int i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
