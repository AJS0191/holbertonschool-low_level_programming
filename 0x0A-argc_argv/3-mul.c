#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies numbers two number together
 *
 * @argc: number of arguments
 * @argv: numbers to be added together
 *
 * Return: 0 if success, 1 if failed
 **/

int main(int argc, char *argv[])
{
	int a, b, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	p = a * b;
	printf("%d\n", p);
	return (p);
}
