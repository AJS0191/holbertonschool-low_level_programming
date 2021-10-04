#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;
	int ab;
	int ac;
	int bc;

	if (a == b)
	{
		ab = a;

		if (ab < c)
		{
			largest = c;
		}
		else if (ab > c)
		{
			largest = ab;
		}
	}
	else if (a == c)
	{
		ac = a;

		if (ac < b)
		{
			largest = b;
		}
		else if (ac > b)
		{
			largest = c;
		}
	}
	else if (c == b)
	{
		bc = c;

		if (bc < a)
		{
			largest = a;
		}
		else if (bc > a)
		{
			largest = bc;
		}
	}
	else
	{
		if  (a > b && a > c)
		{
			largest = a;
		}
		else if (b > a && b > c)
		{
			largest = b;
		}
		else if (c > a && c > b)
		{
			largest = c;
		}
	}

	return (largest);
}
