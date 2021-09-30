#include "main.h"
/**
 * _islower - tells lower or uppercase
 *@c: uppercase or lowercase character
 *
 * Description: takes an interger and tells you if its lower case
 *
 *
 * Return: 1 if lowercase and 0 if uppercase
 */

int _islower(int x);
{
	x = x + '0';

	if (x < 97)
		return (0);
	if (x >= 97)
		return (1);
	return(1);
}
