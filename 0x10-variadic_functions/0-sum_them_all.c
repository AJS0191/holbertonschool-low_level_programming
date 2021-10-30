#include "main.h"
/**
 * sum_them_all - add all ints and returns the sum
 *
 * @n: number of arguments to be passed
 *
 * Return: the sum off number or 0 if n==0
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
