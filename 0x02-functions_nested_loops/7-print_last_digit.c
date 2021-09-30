#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @int: interger to be checked
 *
 * Description: takes an interger and returns the last digit
 *  *
 * Return: returns the last digit of input
 */

int print_last_digit(int);

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
