#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies 2 numbers
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success
 **/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
