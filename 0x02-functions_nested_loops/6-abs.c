#include "main.h"
/**
 * _abs- prints absolute value
 * @int: interger to be checked
 *
 * Description: takes an interger and returns the absolute value
 *
 *
 * Return: 0 for 0, -1 for negatives, 1 for positives
 */
int _abs(int);

int _abs(int a)
{
	if (a < 0)
	{
		a = -a;
		return (a);
	}
	else
	{
		return (a);
	}
}
