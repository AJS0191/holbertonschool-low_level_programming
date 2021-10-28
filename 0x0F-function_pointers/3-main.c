#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - takes 3 arguments and calulates
 *
 * @argc: count
 * @argv: vectors
 *
 * Return: int
 **/

int main(int argc, char *argv[])
{
	int val;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	if (*argv[2] != '/' && *argv[2] != '*' && *argv[2] != '+' && *argv[2] != '-' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	val = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", val);
	return (0);
}
