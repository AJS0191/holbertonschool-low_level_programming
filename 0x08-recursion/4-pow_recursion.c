#include "main.h"
/**
 * _pow_recursion - takes x to the y power
 *
 * @x: integer being multiplied
 * @y: power int x is being taken to
 *
 * Return: int x to the power y
 **/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 1)
		return (-1);
	if (y == 1)
		return (x * x);

	return (x * _pow_recursion(x, y - 1));
}
