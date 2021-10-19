#include "main.h"
#include <stdio.h>
/**
 * main - main will print the number of arguments
 *
 * @argc: number of command line arguments
 * @argv: string holding commands
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc);
	return (0);
}
