#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Takes an integer and returns whether it is 0 - 9.
 *
 * @c: The integer to be tested
 *
 * Return: 1 if upper. 0 if otherwise.
 **/

int _isdigit(int c);

int _isdigit(int c)

{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
		return (0);
}
