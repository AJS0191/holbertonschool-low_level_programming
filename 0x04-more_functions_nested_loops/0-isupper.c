#include "main.h"
#include <stdio.h>

/**
 * _isupper - Takes an integer and returns whether it is upper or lower case.
 *
 * @c: The integer to be tested
 *
 * Return: 1 if upper. 0 if otherwise.
 **/

int _isupper(int c);

int _isupper(int c)

{
	int a;
	a = c + 0;

	if ((a <= 65) && (a >= 90))
	{
		return (1);
	}
	else
		return (0);
}
