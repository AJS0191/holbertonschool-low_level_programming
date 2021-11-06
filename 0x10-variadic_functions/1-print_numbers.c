#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - takes a list of ints and prints them to stdout
 *
 * @separator: string that acts as sperator for ints
 * @n: the number of ints being printed
 *
 * Return: VOID
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int x, counter;

	if (separator == NULL)
	{
		va_start(ap, n);
		for (counter = 0; counter < n - 1; counter++)
		{
			x = va_arg(ap, int);
			printf("%d", x);
		}
		x = va_arg(ap, int);
		printf("%d\n", x);
		va_end(ap);
	}
	else
	{
		va_start(ap, n);
		for (counter = 0; counter < n - 1; counter++)
		{
			x = va_arg(ap, int);
			printf("%d", x);
			printf("%s", separator);
		}
		x = va_arg(ap, int);
		printf("%d\n", x);
		va_end(ap);
	}
}
