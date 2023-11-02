#include "main.h"
/**
  **malloc_checked - allocates memory
  *@b: input
  *Return: pointer to allocated mem
  */
void *malloc_checked(unsigned int b)
{
	char *mall;

	mall = malloc(b);

	if (mall == NULL)
		exit(98);
	else
		return (mall);
}
