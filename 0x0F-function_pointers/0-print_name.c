#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name -takes instruction on how to print string name
 *
 * @name: the name to be printed
 * @f:how it is printed
 *
 * Return:
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);
	f(name);
}
