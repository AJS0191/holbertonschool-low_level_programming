#include "main.h"
/**
 * _isalpha - entry point to program
 * @c: a character to be checked
 *
 * Description: takes a character and checks if it is a letter
 *
 * Return: 0
 */

int _isalpha(int c);

int _isalpha(int c)
{
	c = c;

	if (c < 59)
	{
		if (c > 32)
		{
			return (1);
		}
		else
			return (0);
	}
	else if (c < 123)
	{
		if (c > 96)
		{
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}
