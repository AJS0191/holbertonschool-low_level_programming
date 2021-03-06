#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - takes a list of strings and prints them with a seperator
 *
 * @separator: string used to seperate string list
 * @n: unsigned int number of string being passed
 *
 * Return: VOID
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *x;
	unsigned int counter;

	if (n == 0)
		exit(0);
	va_start(ap, n);
	for (counter = 0; counter < n - 1; counter++)
	{
		x = va_arg(ap, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL)
			printf("%s", separator);
	}
	x = va_arg(ap, char *);
	if (x == NULL)
		printf("(nil)");
	printf("%s\n", x);
	va_end(ap);
}
