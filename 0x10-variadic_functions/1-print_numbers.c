#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers -  prints numbers, followed by a new line
  *@separator: string to be printed between numbers
  *@n: takes in number of arguments
  *Return: printed array of numbers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list gippy;

	va_start(gippy, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(gippy, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(gippy);
}
