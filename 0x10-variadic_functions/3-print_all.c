//#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints data types specified by a char in format
 *
 * @format: char * of ids to specify type
 *
 * Return: VOID
 */

void print_all(const char * const format, ...)
{
	int i = 0, si = 0;
	char *str;

	va_list ids;
	va_start(ids, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ids, int));
			si = 1;
			break;
		case 'i':
			printf("%d", va_arg(ids, int));
			si = 1;
			break;
		case 'f':
			printf("%f", va_arg(ids, double));
			si = 1;
			break;
		case 's':
			str = va_arg(ids, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			si = 1;
			break;
		}
		if (si == 1 && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ids);
}
