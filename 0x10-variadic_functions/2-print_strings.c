#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *print_strings -  prints strings, followed by a new line
  *@separator: string to be printed between the strings
  *@n: number of strings passed to the function
  *@...variable number of strings to be printed
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *blop;

	va_list puffy;

	va_start(puffy, n);

	for (i = 0 ; i < n ; i++)
	{
		blop = va_arg(puffy, char *);

		if (blop == NULL)
			printf("(nil)");
		else
			printf("%s", blop);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(puffy);
}
