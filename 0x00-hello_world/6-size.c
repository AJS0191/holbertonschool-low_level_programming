#include <stdio.h>
/**
 * main - Entry point for this program
 * paramater - void
 *
 *Description: Is the entry point of the program and also prints sizes of types
 *
 *Return: Returned value is 0.
 */


int main(void)
{
	long int longint; /* must not contain spaces for printf */
	long long int longlongint;

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
