#include "main.h"
/**
  **_calloc - allocates memory of an array
  *@nmemb: number of members in array
  *@size: size of array
  *Return:  pointer to the allocated memory.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);
	else
		return (output);
}
