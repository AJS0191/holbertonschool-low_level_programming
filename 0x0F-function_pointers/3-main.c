#include "main.h"
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

	if (argv[2] == NULL || argc != 3)
		printf("Error\n");

	if (argv[2] == "/" && atoi(argv[3]) == 0)
		printf("Error\n");

	if (argv[2] == "%" && atoi(argv[3]) == 0)
		printf("Error\n");

	val = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", val);
	return (0);
}
