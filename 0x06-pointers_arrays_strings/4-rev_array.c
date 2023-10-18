#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: function parameter
  * @n: function parameter
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}

