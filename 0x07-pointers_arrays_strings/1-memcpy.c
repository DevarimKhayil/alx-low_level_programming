#include "main.h"
/**
  * *_memcpy - copies memory area
  * @n: bytes to be copied
  * @src: source
  * @dest: destination
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		dest[i] = src[j];
	}
	return (dest);
}
