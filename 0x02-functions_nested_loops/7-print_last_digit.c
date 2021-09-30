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
	n = n * 11;
	return (n);
}
