#include "main.h"
/**
  **create_array - creates an array of chars
  *@size: size of the array
  *@c: value to store in array
  *Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		arr[i] = c;
	return (arr);
}
