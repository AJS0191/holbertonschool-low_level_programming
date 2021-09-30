#include "main.h"
/**
 * print_sign - + or -
 * @n: interger to be checked
 *
 * Description: takes an interger and returns positive or negative
 *
 *
 * Return: 0 for 0, -1 for negatives, 1 for positives
 */
int print_sign(int n);

int print_sign(int n)
{
	n = n * 1;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
