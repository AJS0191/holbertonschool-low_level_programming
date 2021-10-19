#include "main.h"
#include <stdio.h>
/**
 * main - main will print it's own name
 *
 * @argc: number of command line arguments
 * @argv: string holding commands
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int a = 0;

	argc = argc;
	while (a < argc)
	{
	printf("%s\n", argv[a]);
	a++;
	}
	return (0);
}
