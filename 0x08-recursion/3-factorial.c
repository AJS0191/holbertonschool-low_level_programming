#include "main.h"
/**
 * factorial - takes an integer and returns its factorial
 *
 * @n: integer being worked on
 *
 * Return: an int of !n or -1 on error
 **/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
